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
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        int cZero = 0;
        int cOne = 0;

        for(int i=0;i<n;i++){
            if(arr[i]==0) cZero++;
            else if(arr[i]==1) cOne++;
        }
        long long res = pow(2,cZero) * cOne;
        cout<<res<<endl;
    }
    return 0;
}