#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int N;
        cin >> N;
        int brr[N];
        for (int i = 0; i < N; i++) cin >> brr[i];
        
        unordered_map<int, int> fez;
        int zCount = 0;
        for (int i = 0; i < N; i++) {
            if (brr[i] == 0) zCount++;
            else fez[brr[i]]++;
        }
        
        int ans = 0;
        int mFez = 0;

        for (auto& pair : fez) {
            int fVal = pair.second;
            ans += (fVal * (fVal - 1)) / 2;
            mFez = max(mFez, fVal);  
        }
        if (zCount > 0) {
            int rPairs = (mFez * (mFez - 1)) / 2;
            int nPairs = ((mFez + zCount) * (mFez + zCount - 1)) / 2;
            ans += nPairs - rPairs;
        }
        cout << ans << endl;
    }
    return 0;
}
