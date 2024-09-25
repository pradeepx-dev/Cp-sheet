#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define vi vector<int>
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
	int n;
	cin>>n;

	vi arr(n);
	map<int,int> mp;
	for(int i=0; i<n; i++){
		cin>>arr[i];

		mp[arr[i]]++;
	}

	int freq=0;
	for(auto it:mp){
		freq = max(freq, it.second);
	}

	int ops=0;
	while(freq < n){
		ops++;//clone

		if(n-freq >= freq){
			ops += freq;
			freq *= 2;
		}else{
			ops += n-freq;
			freq = n;
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

    return 0;
}