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
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        vector<bool> m(n+1, false);
        
        vector<int> v(n,0);
        int d=n;
        for(int i=0;i<n;i++){
            if(m[arr[i]] == false){
               m[arr[i]]=true;      
               v[i]=arr[i];          
            }
            else{
               while(m[d]==true){
                  d--;
               }
              v[i]=d;
              m[d]=true;
              d--;
            }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}