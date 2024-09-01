#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            vec[i]--; 
        }
        string s;
        cin >> s;
        
        vector<int> vecNew(n, 0);
        vector<int> brr(n, 0);
        for (int i = 0; i < n; i++) {
            if (!vecNew[i]) {
                vector<int> runn;
                int karrr = 0;
                int elror = i;
                while (!vecNew[elror]) {
                    vecNew[elror] = 1;
                    runn.push_back(elror);
                    if (s[elror] == '0') karrr++;
                    elror = vec[elror];
                }
                
                for (int npm : runn) {
                    brr[npm] = karrr;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << brr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}