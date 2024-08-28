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
        if(arr[0]==1) arr[0]++;
        for(int i=1;i<n;i++){
            if(arr[i]==1) {
                if(arr[i-1]%2==0){
                    arr[i]+=2;
                }else arr[i]++;
            }
            else if(arr[i]%arr[i-1]==0)arr[i]++;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}