#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;
    
    while(t--){
       int n,m;
       cin>>n>>m;
       vector<pair<int,pair<int,int>>>vecppp(n);
       int sol=0;
       while(m--){
           string s;
           cin>>s;
           int vA=0, vB=0, vC=0;
           
           for(int i=0;i<s.size();i++){
               if(s[i]=='0')
                   vecppp[i].first++;
               else if(s[i]=='1')
                   vecppp[i].second.first++;
               else
                   vecppp[i].second.second++;
           }
       }
       
       for(int i=0;i<n;i++){
           int vA=vecppp[i].first;
           int vB=vecppp[i].second.first;
           int vC=vecppp[i].second.second;
           
           while(vC--){
               if(vA<=vB) vA++;
               else vB++;
           }
        sol+=(vA*vB);
       }
       cout<<sol<<endl;
    }
    return 0;
}
