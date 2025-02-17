// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n, l, r;
//         cin >> n >> l >> r;

//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         vector<int> brr(arr.begin() + l - 1, arr.begin() + r);
//         vector<int> crr(arr.begin() + r, arr.begin() + n-1);
//         arr.erase(arr.begin() + l - 1, arr.begin() + n-1);

//         for (int i = 0; i < arr.size(); i++) {
//             cout<<crr[i];
//         }
        

//         // sort(brr.begin(), brr.end(), greater<int>());
//         // sort(arr.begin(), arr.end());

//         // int sum = 0;


//         // cout << sum << endl;
//     }

//     return 0;
// }
  


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
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Extract the segment and split the array into left and right parts
        vector<int> left(arr.begin(), arr.begin() + l - 1);
        vector<int> middle(arr.begin() + l - 1, arr.begin() + r);
        vector<int> right(arr.begin() + r, arr.end());

        // Sort left, right, and middle
        sort(left.begin(), left.end());
        sort(right.begin(), right.end());
        sort(middle.begin(), middle.end());

        // Calculate the two sums
        ll sum1 = 0, sum2 = 0;
        vector<int> temp = middle;

        // Replace elements in 'middle' with 'left' where beneficial
        for (size_t i = 0; i < min(left.size(), middle.size()); i++) {
            if (middle[i] > left[i]) {
                temp[i] = left[i];
            }
        }
        sum1 = accumulate(temp.begin(), temp.end(), 0LL);

        // Replace elements in 'middle' with 'right' where beneficial
        temp = middle; // Reset temp
        for (size_t i = 0; i < min(right.size(), middle.size()); i++) {
            if (temp[i] > right[i]) {
                temp[i] = right[i];
            }
        }
        sum2 = accumulate(temp.begin(), temp.end(), 0LL);

        // Output the minimum of the two sums
        cout << min(sum1, sum2) << endl;
    }

    return 0;
}
