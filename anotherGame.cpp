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
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

         int in=n-1;
         int p=1;
         while(in>=0){
            if(a[in]==in+1){
                 in--;
                 p++;
            }
            else{
                cout<<in+2<<"\n";
                break;
            }
         }
         if(in<0){
            cout<<0<<"\n";
         }
    }
    return 0;
}