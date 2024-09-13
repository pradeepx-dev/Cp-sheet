#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void solve(){
	int n;
	cin>>n;
 
	vi arr(n+1);
	for(int i=1; i<=n; i++)
		cin>>arr[i];
 
	int maxi = arr[n]-arr[1];
	for(int i=1; i<=n-1; i++){
		maxi = max(maxi, arr[n]-arr[i]);
	}
	for(int i=2; i<=n; i++){
		maxi = max(maxi, arr[i] - arr[1]);
	}
	for(int i=1; i<=n-1; i++)
		maxi = max(maxi, arr[i] - arr[i+1]);
 
	cout<<maxi<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}