#include <bits/stdc++.h>
#define ll long long
#define forl for (int i = 0; i < n; i++)
#define endl "\n"
#define cp(t) \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cp(t)
    {
        int n, q;
        cin >> n >> q;
        int ar[n];
        int prf[n + 2];
        prf[0] = 0;
        forl
        {
            cin >> ar[i];
            prf[i + 1] = prf[i] + ar[i] % 2;
        }
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            int x = (prf[r] - prf[l - 1]) % 2;
            if (k % 2){
                int tmp = r - l + 1;
                if (tmp % 2){
                    if (!x) cout << ((prf[n] % 2) ? "NO" : "YES") << endl;
                    else cout << ((prf[n] % 2 == 0) ? "NO" : "YES") << endl;
                }
                else{
                    if (x) cout << ((prf[n] % 2) ? "NO" : "YES") << endl;
                    else cout << ((prf[n] % 2 == 0) ? "NO" : "YES") << endl;
                }
            }
            else{
                if (x) cout << ((prf[n] % 2) ? "NO" : "YES") << endl;
                else cout << ((prf[n] % 2 == 0) ? "NO" : "YES") << endl;
            }
        }
    }

    return 0;
}