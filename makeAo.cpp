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
        int x,y,z;
        cin>>x>>y>>z;

        int a = y-x;
        int b = z-y;
        if(a == b) cout<<0<<endl;
        else cout<<1<<endl;


    }
    return 0;
}