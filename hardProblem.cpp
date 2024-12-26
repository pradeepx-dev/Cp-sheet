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
        int m, a, b, c;
        cin>>m>>a>>b>>c;
        int store=2*m;
        if(a>m && store > 0) store -= m;
        else if(store > 0) store -= a;

        if(b>m && store > 0) store -= m;
        else if(store > 0) store -= b;

        if(store > 0) store -= c;
        if(store < 0) store =0;
        cout<< (2*m) - store<<endl;

    }
    return 0;
}