#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        int array[n];
        for(int i=0;i<n;i++) cin>>array[i];
        int counter = array[n-1];
        for(int i=0;i<k;i++) counter += array[i];
        array[n-1]=counter;
        for(int i=k;i<n;i++) cout<<array[i]<<" ";
        cout<<"\n";
    }
    return 0;
}