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
        vector<vector<int>> arr(n, vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            cin>>arr[i][j];
            }
        }
        for(int i = 0; i < n; i++) {
            sort(arr[i].begin(), arr[i].end());
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<arr[j][i]<<" ";
                cout<<endl;
            }
        }

    }
    return 0;
}