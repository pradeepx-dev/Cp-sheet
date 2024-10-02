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
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        int sum = 0;
        int count=0;
        for(int i=0;i<n;i++){
            if(sum+arr[i]>k) break;
            else{
                sum += arr[i];
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}