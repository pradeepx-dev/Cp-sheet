#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
   
    map<int,int> m;
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
        m[arr[i]]++;
    }
    int temp=-1;
    for(auto i:m){
        if(i.second>=2){
            temp=i.first;
            break;
        }
    }
    if(temp!=-1){
        cout<<1<<endl;
    }
    cout<<temp<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
