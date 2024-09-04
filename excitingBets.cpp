#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;

        long long z = abs(a-b);
        if(z==0) cout<<"0 0"<<endl;
        else{
            long long l = a%z;
            cout<<z<<" ";
            cout<<min(l,z-l)<<endl;
        }
    }
    return 0;
}