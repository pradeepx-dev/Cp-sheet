#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        ll n, max, min;
        cin >> n;
        if (n % 2 or n < 4)
        {
            cout << -1 << endl;
            continue;
        }
        ll fours = n / 4;
        ll six = n / 6;
        max = fours;
        if (n % 6 == 0)
            min = six;
        else
        {
            if (n % 6 == 4)
                min = six + 1;
            else if (n % 6 == 2)
                min = ((n - 4) / 6) + 2;
        }
        cout << min << " "<<max<<endl;
    }
    
    return 0;
}
