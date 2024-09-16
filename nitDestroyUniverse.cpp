#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n+1);
        int ans =0;
        for(int i=1;i<=n;i++){
            cin>>v[i];
            if(v[i-1]==0 && v[i] !=0) ans++;
        }
        ans = min(ans, 2);
        cout<<ans<<endl;
    }
    return 0;
}