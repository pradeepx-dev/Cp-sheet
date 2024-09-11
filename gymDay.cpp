#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;

    while (t--) {
        int D, X, Y;
        cin >> D >> X >> Y;

        if (Y >= X) {
            cout << 0 << endl;
            continue;
        }
        int days = 0;
        bool sol = false;

        while (true) {
            int left = Y - days;
            if (left < 0) break;
            double dPrice = X * (100 - days * D) / 100.0;
            if (dPrice <= left) {
                cout << days << endl;
                sol = true;
                break;
            }
            days++;
        }
        if (!sol) cout << -1 << endl;
    }

    return 0;
}