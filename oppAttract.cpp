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
        int n;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='0') s[i]='1';
            else s[i]='0';
        }
        cout<<s<<endl;
    }
    return 0;
}