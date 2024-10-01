#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while(t--) {
        ll n,b,ans=0;
        cin>>n;
        vector < ll > v;
        for(ll i = 1 ; i <= n ; i++) {
            cin>>b;
            if(abs(b-i)!=0) {
                ans = __gcd(ans,abs(b-i));
            }
        }
        cout<<ans<<endl;
    }
    return 0;     
 }        