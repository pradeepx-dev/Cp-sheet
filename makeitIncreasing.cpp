#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long
#define vi vector<int>
#define pb push_back

void solve(){
	int n;
	cin>>n;

	vi arr(n);
	for(int i=0; i<n; i++)
		cin>>arr[i];

	int ops = 0;
	for(int i=n-1; i>0; i--){
		if(arr[i] == 0){
			cout<<-1<<nl;
			return;
		}

		while(arr[i-1] > 0 && arr[i] <= arr[i-1]){
			arr[i-1]/=2;
			ops++;
		}
	}
	cout<<ops<<nl;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t=1;
	cin>>t;
	while(t--)
		solve();
}