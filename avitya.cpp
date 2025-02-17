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
        string a="ADVITIYA";
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]<a[i]){
                count+= abs(s[i]-a[i]);
            }
            else if(s[i]>a[i]){
                int t = abs(s[i]-a[i]);
                count+= 26-t;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}