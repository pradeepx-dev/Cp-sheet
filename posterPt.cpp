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
        int n,m,k;
        cin>>n>>m>>k;

        int extra=1000;
        int a=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                a = 2*(i+j);
                extra=min(abs(k-a),extra);
            }
        }
        cout<<extra<<endl;
    }
    return 0;
}