#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
void Solve(){
    int n;
    cin>>n;
    vector<int> p(n+1);
    for(int i=1;i<=n;i++){
        cin>>p[i];
    }
    vector<int> pre_min(n+1);
    vector<int> pre_idx(n+1);
    pre_min[1]=p[1];
    pre_idx[1]=1;
    for(int i=2;i<=n;i++){
        int mn=min(pre_min[i-1],p[i]);
        pre_min[i]=mn;
        if(mn==p[i]){
            pre_idx[i]=i;
        }
        else{
            pre_idx[i]=pre_idx[i-1];
        }
    }
    vector<int> suff_min(n+1);
    vector<int> suff_idx(n+1);
    suff_min[n]=p[n];
    suff_idx[n]=n;
    for(int i=n-1;i>=1;i--){
        int mn=min(suff_min[i+1],p[i]);
        suff_min[i]=mn;
        if(mn==p[i]){
            suff_idx[i]=i;
        }
        else{
            suff_idx[i]=suff_idx[i+1];
        }
    }
    for(int j=2;j<=n-1;j++){
        if(p[j]>pre_min[j-1] && p[j]>suff_min[j+1]){
            cout<<"YES\n";
            cout<<pre_idx[j-1]<<" "<<j<<" "<<suff_idx[j+1]<<endl;
            return;
        }
    }
    cout<<"NO\n";
}
 
int32_t main(){
    int T=1;
    cin>>T;
    while(T--){
        Solve();
    }
    return 0;
}