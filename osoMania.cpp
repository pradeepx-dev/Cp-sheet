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
        vector<int> vec;
        char array2d[n][4];
        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                cin>>array2d[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                if(array2d[i][j] == '#'){
                    vec.push_back(j+1);
                    break;
                }
            }
        }
        reverse(vec.begin(),vec.end());
        for(int i=0;i<n;i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}