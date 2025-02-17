// #include<bits/stdc++.h>
// using namespace std;
// using i64 = long long;


// void solve(){
//     int n;
//     cin>>n;
//     map<int, set<int>> m;
//     for(int i=1;i<n;i++){
//         int a,b;
//         cin>>a>>b;
//         m[a].insert(b);
//         m[b].insert(a);
//     }
//     int k=0;
//     for(auto i:m){
//         if(i.second.size()>k){
//             k=i.second.size();
//         }
//     }
//     int x=0;
//     set<int> s;
//     for(auto i:m){
//         if(i.second.size()==k){
//             s=i.second;
//             x=i.first;
//         }
//     }
//     for(auto i: s){
//         if(m[i].find(x)!=m[i].end()){
//             m[i].erase(x);
//         }
//     }
//     m.erase(x);
//     k=0;
//     for(auto i:m){
//         if(i.second.size()>k){
//             k=i.second.size();
//         }
//     }
//     int temp=x;
//     x=0;
//     s.empty();
//     vector<int> v;
//     for(auto i:m){
//         if(i.second.size()==k){
//             x=i.first;
//             v.push_back(x);
//         }
//     }
//     int o=-1;
//     for(int i=0;i<v.size();i++){
//         s=m[v[i]];
//         bool flag=false;
//         for(auto i:s){
//             if(i==temp){
//                 flag=true;
//                 break;
//             }
//         }
//         if(flag) continue;
//         else{
//             o=i;
//             s=m[v[i]];
//             break;
//         }
//     }
//     if(o>=0){
//         x=v[o];
//     }
//     else{
//         int p=k;
//         k=0;
//         for(auto i:m){
//             if(i.second.size()>k and i.second.size()!=p){
//                 k=i.second.size();
//             }
//         }
//         int x=0;
//         s.empty();
//         for(auto i:m){
//             if(i.second.size()==k){
//                 s=i.second;
//                 x=i.first;
//             }
//         }
//     }
    

//     for(auto i: s){
//         m[i].erase(x);
//     }
//     m.erase(x);
//     // cout<<" map: ";
//     // for(auto i:m){
//     //     cout<<i.first<<" ";
//     //     for(auto j:i.second) cout<<j<<" ";
//     //     cout<<endl;
//     // }
//     set<int> camp;
//     int count=0;
//     for(auto i:m){
//         if(camp.find(i.first)==camp.end()){
//             count++;
//         }
//         camp.insert(i.first);
//         for(auto j:i.second){
//             camp.insert(j);
//         }
//     }
//     cout<<count<<endl;
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin>>t;

//     while(t--){
//         solve();
//     }
//     return 0;
// }


//Prady Solution:

#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

void solve(){
    int n;
    cin>>n;
    set<pair<i64,i64>> edges;
    vector<pair<i64,i64>> degree(n+1,{0,0});
    for(int i=0;i<=n;i++){
        degree[i].second=i;
    }
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        edges.insert({a,b});
        degree[a].first++;
        degree[a].second=a;
        degree[b].second=b;
        degree[b].first++;
    }

    i64 res=0;
    for(auto i:edges){
        res=max(res,(degree[i.first].first+degree[i.second].first)-2);
    }

    sort(degree.begin(),degree.end(),greater<pair<i64,i64>>());
    i64 temp=0;
    for(int i=0;i<=n;i++){
        if(degree[i].second==0) continue;
        temp=degree[i].first;
        for(int j=i+1;j<=n;j++){
            if(degree[j].second==0) continue;
            pair<i64,i64> p={degree[i].second,degree[j].second};
            pair<i64,i64> q={degree[j].second,degree[i].second};
            if(edges.find(p)==edges.end() and edges.find(q)==edges.end()){
                temp+=degree[j].first;
                res=max(res,temp-1);
                break;
            }
        }
    }
    cout<<res<<endl;


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}