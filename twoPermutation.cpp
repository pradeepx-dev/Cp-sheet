#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
 
        if((n==a and a==b) or (a<=n and b<=n and n-b+1>a and n-b+1-a>2))  cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}