#include <bits/stdc++.h>
using namespace std;
#define ll long long

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

        int sum=0;
        sort(arr, arr+n);
        for(int i=0;i<n;i++){
            int r = arr[i] -i;
            if(r>0) sum +=r;
        }
        cout<<sum<<endl;

    }
    return 0;
}