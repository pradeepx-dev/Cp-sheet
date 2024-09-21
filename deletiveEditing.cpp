#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        unordered_map<char, ll>mp;
        for(auto ch:t){
            mp[ch]++;
        }
        string ans = "";
        for(ll i = s.size()-1; i>=0; i--){
            if(mp[s[i]]!=0){
                ans = s[i]+ans;
                mp[s[i]]--;
            }
        }
        if(ans==t) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}