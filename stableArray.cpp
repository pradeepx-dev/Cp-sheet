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

        int a;
        vector<int> brr;
        brr.push_back(arr[n-1]);
        for(int i=n-2;i>=0;i--){
            a = arr[i];
            
            a= max(a, brr[brr.size()-1]);
            brr.push_back(a);
        }

        int count=0;
        int sum=0;
        
        reverse(brr.begin(), brr.end());
        int num=brr[0];
        for(int i=0;i<n;i++){
            if(brr[i]!=arr[i]) count++;
            else{
                sum = max(sum, count);
                count=0;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}