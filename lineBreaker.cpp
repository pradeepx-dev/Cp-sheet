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
        int n,m;
        cin>>n>>m;
        string arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        int sum=0;
        int wNum=0;
        for(int i=0;i<n;i++){
            int a= arr[i].size();
            if(sum<m){
                sum = sum+a;
                if(sum<=m) wNum++;
            }
        }
        cout<<wNum<<endl;
    }
    return 0;
}