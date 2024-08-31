#include <bits/stdc++.h>
using namespace std;

pair<int, int> occur(string s, int size)
{
    pair<int, int> ans;
    int ab = 0;
    int ba = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'b')
            ab++;
        else if (s[i] == 'b' && s[i + 1] == 'a')
            ba++;
    }
    ans.first = ab;
    ans.second = ba;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        pair<int, int> v;
        v = occur(s, s.size());

        int ab = v.first;
        int ba = v.second;
        if(ab!=ba){
            if(s[n-1]=='b'){
                s[n-1]='a';
 
            }else{
                s[n-1]='b';
            }
    }
        cout << s << endl;
    }
    return 0;
}