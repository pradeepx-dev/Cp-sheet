#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        int nCount = 0;
        long long resssss = 0;
        int aValue = INT_MAX;

        for (int i = 0; i < n; i++) {
            cin >> vec[i];
             resssss += abs(vec[i]); 
            aValue = min(aValue, abs(vec[i]));
            if (vec[i] < 0) {
                nCount++;
            }
        }
        if (nCount % 2 != 0) {
            resssss -= 2 * aValue;
        }

        cout << resssss << '\n';
    }
    return 0;
}