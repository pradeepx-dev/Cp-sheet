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
        int l,k;
        cin>>l>>k;

        if(l==1 && k==1) cout<<1<<endl;
        else cout<<k-l<<endl;
    }
    return 0;
}