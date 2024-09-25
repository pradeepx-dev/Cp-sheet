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
        int r,g,b;
        cin>>r>>g>>b;

        int a = r<=(g+b);
        int z = g<=(r+b);
        int c = b<=(g+r);

        if(a && z && c)cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}