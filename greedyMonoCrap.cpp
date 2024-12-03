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
        int n,k;
        cin>>n>>k;
        int res=0;
        vector<int> ans(n);
        for(int i=0;i<n;i++) cin>>ans[i];
        sort(ans.begin(), ans.end(), greater<int>());
        int i=0;
        while(res<=k&&i<n){
            res = res+ans[i];
            i++;
        }
        if(res==k) cout<<0<<endl;
        else if(res<k){
            cout<<k-res<<"\n";
        }
        else{
            res = res - ans[i-1];
            cout<< k-res<<endl;
        }
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         int res = 0;
//         vector<int> ans(n);
//         for (int i = 0; i < n; i++) cin >> ans[i];
//         sort(ans.begin(), ans.end(), greater<int>());

//         int i = 0;
//         while (i < n && res <= k) {
//             res += ans[i];
//             i++;
//         }

//         if (res == k) {
//             cout << 0 << endl;
//         } else if(res>k){
//             // Decrement `i` to point to the last added element
//             i--;
//             res -= ans[i];
//             cout << k - res << endl;
//         }
//     }
//     return 0;
// }
