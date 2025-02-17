#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;

        vector<ll> arr(n);
        for(ll i=0;i<n;i++) cin>>arr[i];

        sort(arr.begin(), arr.end(), greater<ll>());
        ll maxx=arr[0];
        ll val = x;
        for(ll i=1;i<n;i++){
            ll a = arr[i]+val;
            maxx = max(maxx, a);
            val += x;
        }
        cout<<maxx<<endl;

    }
    return 0;
}