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
        cin>>n;
        int store = 0; 
        for(int i=1;i<=n; i++){
            for(int j=1; j<n; j++){
                if(i+j == n) store++;
            }
        }
        cout<<store<<endl;
    }
    return 0;
}