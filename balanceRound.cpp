#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        int round=0;
        int ans=1;
        for(int i=1;i<n;i++){
            int oye = arr[i] - arr[i-1];
            if(oye <= k) ans++;
            else{
                round = max(round,ans);
                ans=1;
            }
        }
        round = max(round,ans);
        cout<<n-round<<endl;
    }
    return 0;
}