// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n,p;
//         cin>>n>>p;

//         vector<ll> arr(n);
//         vector<ll> brr(n);
//         for(ll i=0;i<n;i++) cin>>arr[i];
//         for(ll i=0;i<n;i++) cin>>brr[i];

//         ll sum=p;
//         n=n-1;
//         ll mini = INT32_MAX;
//         ll index, k=-1;
//         bool flag = true;
//         for(ll i=0;i<arr.size();i++){
//             for(ll j=0;j<brr.size();j++){
//                 if(brr[j]<p){
//                     if(brr[j]<mini){
//                         mini=brr[j];
//                         index = arr[j];
//                         k=j;
//                         flag = false;
//                     }
//                 }
//             }
//             arr.erase(arr.begin() + k);
//             brr.erase(brr.begin() + k);

//             if(flag){
//                 sum+= n*p;
//                 n=0;
//                 break;
//             }
//             else{
//                 if(index<=n){
//                     n=n-index;
//                     sum+= (index* mini);
//                 }
//                 else{
//                     sum+= mini *n;
//                     n=0;
//                 }

//             } 
//             if(n==0) break;
//             flag = true;
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, p;
        cin >> n >> p;

        vector<pair<ll, ll>> items(n);
        for (ll i = 0; i < n; i++) cin >> items[i].second;
        for (ll i = 0; i < n; i++) cin >> items[i].first;

        sort(items.begin(), items.end());

        ll sum = p;
        n= n-1;
        for (int i=0; i<items.size(); i++) {
            if (items[i].first >= p) break;

            if (items[i].first < p) {
                if (items[i].second <= n) {
                    sum += items[i].second * items[i].first;
                    n -= items[i].second;
                }else {
                    sum += n * items[i].first;
                    n = 0;
                    break;
                }
            }
        }
        if (n > 0) sum += n * p;
        cout << sum << endl;
    }
    return 0;
}
