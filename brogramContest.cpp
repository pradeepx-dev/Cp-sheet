#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int moves = 0;
        for (int i = 0; i < n - 1; i++){
            if(s[i] != s[i+1])
                moves++;
        }

        if(s[0] == '1')
            moves++;
        
        cout << moves << "\n";
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
