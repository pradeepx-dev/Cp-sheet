#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
	ll n;
	cin >> n;

	ll arr[n];
	for(ll i = 0; i < n; i++) cin >> arr[i];

	map<ll, ll> freq;
	for(auto i : arr) freq[i]++;

	if(freq.size() > 2) {
		cout << "No" << '\n';
		return;
	}

	if(freq.size() == 1) {
		cout << "Yes" << '\n';
		return;
	}

	vector<ll> ans;
	for(auto i : freq) ans.push_back(i.second);

	if(abs(ans[0] - ans[1]) <= 1) {
		cout << "Yes" << '\n';
		return;
	}
	cout << "No" << '\n';
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}