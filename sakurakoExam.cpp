#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        if(a==0 && b%2==0) cout<<"Yes\n";
        else if(a%2==0 && a>0) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}