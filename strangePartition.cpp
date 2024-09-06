#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        long long arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        long long minVal=0;
        long long maxVal=0;
        for(int i=0;i<n;i++){
            maxVal +=arr[i];
            if(arr[i] % x ==0) minVal+=(arr[i]/x);
            else minVal+=(arr[i]/x)+1;
        }
        long long maxx = (maxVal % x == 0)? maxVal/x : (maxVal/x)+1;
        cout<<maxx<<" ";
        cout<<minVal<<endl;
    }
    return 0;
}