#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int l,b,x;
        cin>>l>>b>>x;

        int alpha = x*x;
        if(l*b < alpha) cout<<0<<endl;
        else if( l > alpha && b > alpha) cout<<2<<endl;
        else cout<<1<<endl;
    }
    return 0;
}