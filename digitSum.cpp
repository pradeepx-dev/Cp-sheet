#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll x,y;
    cin>>x>>y;
    ll var = x+1-y;
    if(var>=0 && var%9 == 0) cout<<"Yes\n";
    else cout<<"No\n";
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

