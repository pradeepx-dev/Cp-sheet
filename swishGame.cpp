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
        int m,k;
        cin>>m>>k;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<m;i++){
            if(s[i]=='S') count++;
        }
        if(count>=k) cout<<m<<endl;
        else{
            int v=k-count;
            v--;
            cout<<m+(v)<<endl;
        }
    }
    return 0;
}