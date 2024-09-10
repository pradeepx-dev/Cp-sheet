#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int cZero = 0;
        int cOne = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') cOne++;
            else cZero++;
        }
        int minn= min(cZero, cOne);

        if(minn %2 != 0) cout<<"DA\n";
        else cout<<"NET\n";
    }
    return 0;
}