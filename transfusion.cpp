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
        ll n;
        cin>>n;
        ll arr[n];
        ll sum = 0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            sum +=arr[i];
        }
        ll tot = sum/n;
        if(sum%n!=0) cout<<"NO\n";
        else{
            for(ll i=1;i<n-1;i++){
            ll diff = abs(tot - arr[i-1]);
            if(arr[i-1]!=tot)
            // while(diff){
                if(arr[i-1]<tot){
                    arr[i-1] += diff;
                    arr[i+1] -= diff;
                    // diff--;
                }
                else {
                    arr[i-1] -= diff;
                    arr[i+1] += diff;
                    // diff--;
                }
            // }
        }
        bool flag=true;
        for(ll i=0;i<n;i++){
            if(arr[i]!=tot){
                cout<<"NO\n";
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES\n";
        }

    }
    return 0;
}