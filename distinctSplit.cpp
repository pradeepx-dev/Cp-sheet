// #include <bits/stdc++.h>
// #define ll long long int
// #define nline '\n'
// using namespace std;

// void solve()
// {
//     ll n;
//     cin >> n;

//     string s;
//     cin >> s;

//     ll pref[n], suff[n];
//     unordered_set<char> hSet;

//     for (ll i = 0; i < n; i++)
//     {
//         hSet.insert(s[i]);
//         pref[i] = hSet.size();
//     }
//     hSet.clear(); 

//     for (ll i = n - 1; i >= 0; i--)
//     {
//         hSet.insert(s[i]);
//         suff[i] = hSet.size();
//     }

//     ll ans = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         ans = max(ans, (pref[i] + suff[i + 1]));
//     }
//     cout << ans << nline;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll T = 1;
//     cin >> T;
//     while (T--) 
//     {
//         solve();
//     }

// }



#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> map1,map2;
    int var=0;
    for(auto i:s)map1[i]++;
    for(int i=0;i<n-1;i++){
        map2[s[i]]++;
        map1[s[i]]--;
        if(map1[s[i]]==0)map1.erase(s[i]);
        int len1=map1.size();
        int len2=map2.size();
        var=max(var,len1+len2);
    }
    cout<<var<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}