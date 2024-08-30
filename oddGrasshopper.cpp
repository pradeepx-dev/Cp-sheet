#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long initial, jump;
        cin>>initial>>jump;

        if(initial % 2 != 0){
            int a = jump % 4;
            if(a == 1) cout<<initial+jump<<endl;
            else if( a == 2) cout<<initial-1<<endl;
            else if( a == 3) cout<<initial-jump-1<<endl;
            else if( a == 0) cout<<initial<<endl;
        }
        else {
            int a = jump % 4;
            if(a == 1) cout<<initial-jump<<endl;
            else if( a == 2) cout<<initial+1<<endl;
            else if( a == 3) cout<<initial+jump+1<<endl;
            else if( a == 0) cout<<initial<<endl;
        }
    }
    return 0;
}