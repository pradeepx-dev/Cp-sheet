#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == j) {
                    cout << 3 << " "; 
                } else if ((n > m && i >= m && j == 0) || (m > n && i == 0 && j >= n)) {
                    cout << 3 << " ";
                } else {
                    cout << 2 << " ";  
                }
            }
            cout << endl;
        }
    }
    return 0;
}