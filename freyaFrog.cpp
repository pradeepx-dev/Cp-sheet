#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;

        int dx= ceil(x*1.0/k);
        int dy= ceil(y*1.0/k);
        int plus = dx+dy;
        int minus = abs(dx-dy);

        if(dy>=dx) cout<<plus+minus<<endl;
        else cout<<plus+minus -1 <<endl;
    }
    return 0;
}