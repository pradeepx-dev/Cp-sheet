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
        int x,y;cin>>x>>y;
        for(int i=0;i<x/2;i++) cout<<1;
        for(int i=0;i<y;i++) cout<<2;
        for(int i=0;i<x/2;i++) cout<<1;
        cout<<endl;
    }
    return 0;
}