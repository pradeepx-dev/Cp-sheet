#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    int elen=-1;
    for(int i=0;i<m;i++){
        if(a[i]>b[i]){
            int flag=false;
            int t = a.size()-i;
            if(t>=b.size()) flag=true;
            if(flag){
                for(int j=i;j<n;j++){
                    int cent=i%b.size();
                    a[i]=b[cent];
                }
            }
            else{
                for(int j=elen;j<n;j++){
                    int cent=elen%b.size();
                    a[i]=b[cent];
                }
            }
        }
        int t = a.size()-i;
        if(t>=b.size()) elen=i;
    }
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
    cout<<endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}