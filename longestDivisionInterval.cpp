#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
    ll num;cin>>num;
    int cnt=0;
    for(ll i=1;i<=num;i++){
        if(num%i!=0) break;
        cnt++;
    }
    cout<<cnt<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}