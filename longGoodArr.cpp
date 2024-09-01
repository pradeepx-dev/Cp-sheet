#include <bits/stdc++.h>
using namespace std;

int solve(int l,int r){
    long long opp = r - l;
    long long sam = (long long)(sqrt(2 * opp + 0.25) - 0.5);
    return sam + 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long l, r;
        cin >> l >> r;
        cout<<solve(l,r)<<endl;
    }
    return 0;
}