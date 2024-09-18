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
        sort(arr, arr+n);
        int a1 = abs(arr[n-3] - arr[0]);
        int a2 = abs(arr[2] - arr[n-1]);
        int a3 = abs(arr[1] - arr[n-2]);

        cout<<min(min(a1,a2),a3)<<endl;

    }
    return 0;
}