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
        int cnt = 0,a=0;
        while(n%6==0) n/=6,cnt++;
        while(n%3==0) n/=3,a++;
        if(n==1) cout<<cnt+(a*2)<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}