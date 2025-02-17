#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

int main() {
    FAST_IO;
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Define 6 possible cyclic patterns
        string patterns[6] = {"GBR", "GRB", "BGR", "BRG", "RGB", "RBG"};
        
        int min_changes = INT_MAX;

        // Iterate once, calculating the changes required for each pattern
        for (int p = 0; p < 6; p++) {
            int changes = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] != patterns[p][i % 3]) {
                    changes++;
                }
            }
            min_changes = min(min_changes, changes);
        }

        cout << min_changes << '\n';
    }
    
    return 0;
}
