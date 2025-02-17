#include <bits/stdc++.h>
using namespace std;
#define ll long long

int findMex(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++) {
        if(i != arr[i]) {
            return i;
        }
    }
    return arr.size();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        sort(arr, arr+n);
        vector<int> vec;
        int ftot =0;
        for(int i=0;i<n;i++){
            if(arr[i]<=7) vec.push_back(arr[i]);
            else ftot += arr[i];
        }

        int mex=findMex(vec);
        int maxx= vec.size()-1;
        for(int i=0;i<2;i++){
            vec[maxx]=mex;
            mex=findMex(vec);
        }
        int subtot = mex* vec.size();

        cout<<ftot+subtot<<endl;

    }
    return 0;
}