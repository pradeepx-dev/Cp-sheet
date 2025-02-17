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

        int even=0, odd=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0) even++;
            else odd++; 
        }
        cout<<max(even, odd)<<endl;
    }
    return 0;
}