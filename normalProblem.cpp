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
        string a;
        cin>>a;
        for(int i=0;i<a.size(); i++){
            if(a[i]=='p') a[i]='q';
            else if(a[i]=='q') a[i]='p';
            else a[i]='w';
        }
        reverse(a.begin(), a.end());
        cout<<a<<endl;
    }
    return 0;
}