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
        vector<int>ans(n+1,0);
        int c=0;
        int co=0;
        for(int i=0;i<n;i++){
            ans[arr[i]]++;
            
        }
        for(int i=0;i<n+1;i++){
            if(ans[i]>0)co++;
            if(ans[i]==1)c++;
        }
        co-=c;
        c+=1;
        c/=2;
        c*=2;

        cout<<c+co<<"\n";

    }
    return 0;
}