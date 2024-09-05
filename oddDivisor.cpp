#include <iostream>
using namespace std;

bool has_odd_divisor(long long n) {
    if (n % 2 != 0) return true;
    while (n % 2 == 0) {
        n /= 2;
    }
    return n > 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (has_odd_divisor(n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
