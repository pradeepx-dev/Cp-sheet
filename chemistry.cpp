#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(n-k<=1){
            cout<<"YES\n";
            continue;
        }
        sort(s.begin(),s.end());
        int c=0;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                ++i;
                if(i==n-1){
                    c++;
                }
            }else{
                if(i==n-1){
                    c+=2;
                }
                else{
                    c++;
                }
            }
        }
        // cout<<c<<"\n";
        if(k>=c-1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
