#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
	int n,m;
	cin>>n>>m;
	int ans=4;
	for(int i=0;i<n;i++){
	    for(int j=0; j<m;j++){
	        cout<<ans<<" ";
	        ans++;
	    }
	    ans=5;
	    cout<<"\n";
	}
    }
	
    return 0;
}