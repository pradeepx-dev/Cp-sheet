// Codeforces 900 rating Question: Comparison String

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        string s;
        cin >> s;

        int max_val = 0;
        int current_val = 1;

        for (int i = 1; i < n; i++){
            if (s[i] == s[i - 1]) current_val++;
            else{
                max_val = max(max_val, current_val);
                current_val = 1;
            }
        }
        max_val = max(max_val, current_val);
        cout << max_val + 1 << "\n";
    }
     return 0;
}