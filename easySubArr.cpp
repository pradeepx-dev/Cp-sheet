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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int negative = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                negative++;
            }
        }
        if (negative == n)
        {
            cout << "0\n";
        }
        else
        {

            int countA = 0;
            int countB = 0;
            int count = 0;
            int i;
            for (i = 0; i < n; i++)
            {
                if (arr[i] <= 0)
                {
                    countA++;
                }
                else
                {
                    break;
                }
            }
            int j;
            for (j = n - 1; j >= 0; j--)
            {
                if (arr[j] <= 0)
                {
                    countA++;
                }
                else{
                    break;
                }
            }
            for (int s = i; s <= j; s++)
            {
                if (arr[s] < 0)
                {
                    count++;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}