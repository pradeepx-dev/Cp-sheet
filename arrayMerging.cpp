//<--------------chatGPT--------------------->
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
 
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin >> t;
    
//     while(t--){
//         int n;
//         cin >> n;
        
//         vector<int> a(n), b(n);
//         for (int i = 0; i < n; i++){
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++){
//             cin >> b[i];
//         }
        
//         vector<int> maxRunA(2*n + 2, 0), maxRunB(2*n + 2, 0);
        
//         int count = 0;
//         for (int i = 0; i < n; i++){
//             if(i == 0 || a[i] == a[i-1]){
//                 count++;
//             } else {
//                 maxRunA[a[i-1]] = max(maxRunA[a[i-1]], count);
//                 count = 1;
//             }
//         }
//         if(n > 0)
//             maxRunA[a[n-1]] = max(maxRunA[a[n-1]], count);
//         count = 0;
//         for (int i = 0; i < n; i++){
//             if(i == 0 || b[i] == b[i-1]){
//                 count++;
//             } else {
//                 maxRunB[b[i-1]] = max(maxRunB[b[i-1]], count);
//                 count = 1;
//             }
//         }
//         if(n > 0)
//             maxRunB[b[n-1]] = max(maxRunB[b[n-1]], count);
//         int ans = 0;
//         for (int x = 1; x <= 2*n; x++){
//             ans = max(ans, maxRunA[x] + maxRunB[x]);
//         }
        
//         cout << ans << "\n";
//     }
    
//     return 0;
// }



// <-----------------------DeepSeek----------------->
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

// Function to calculate the maximum consecutive count of each element in an array
unordered_map<int, int> getMaxConsecutiveCounts(const vector<int>& arr) {
    unordered_map<int, int> maxCounts;
    if (arr.empty()) return maxCounts;

    int currentCount = 1;
    int currentElement = arr[0];
    maxCounts[currentElement] = 1;

    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] == currentElement) {
            currentCount++;
            maxCounts[currentElement] = max(maxCounts[currentElement], currentCount);
        } else {
            currentElement = arr[i];
            currentCount = 1;
            maxCounts[currentElement] = max(maxCounts[currentElement], currentCount);
        }
    }

    return maxCounts;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        // Get maximum consecutive counts for each array
        auto maxCountsA = getMaxConsecutiveCounts(a);
        auto maxCountsB = getMaxConsecutiveCounts(b);

        // Merge the counts and find the maximum possible length
        int maxLen = 0;
        for (const auto& pair : maxCountsA) {
            int num = pair.first;  // Key (element)
            int cnt = pair.second; // Value (count)
            maxLen = max(maxLen, cnt + (maxCountsB.count(num) ? maxCountsB[num] : 0));
        }
        for (const auto& pair : maxCountsB) {
            int num = pair.first;  // Key (element)
            int cnt = pair.second; // Value (count)
            maxLen = max(maxLen, cnt + (maxCountsA.count(num) ? maxCountsA[num] : 0));
        }

        cout << maxLen << '\n';
    }

    return 0;
}