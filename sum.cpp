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
        int a,b,c;
        cin>>a>>b>>c;

        if((a+b)==c || (b+c)==a || (c+a)==b) cout<<"Yes\n";
        else cout<<"No\n";

    }
    return 0;
}