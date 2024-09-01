#include <bits/stdc++.h>
using namespace std;

bool Issub(const string &bStar, int p) {
    int n = sqrt(p);
    if (n * n != p) return false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1) {
                if (bStar[i*n+j] != '1') return false;
            } 
            else {
                if (bStar[i*n+j] != '0') return false;
            }
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        if(Issub(s,n)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}