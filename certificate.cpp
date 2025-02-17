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
        int n;
        cin>>n;
        string s;
        cin>>s;

        int cm=0;
        int cz=0;
        int co=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') cz++;
            else{
                cz=0;
                co++;
            }
            cm=max(cm, cz);
        }
        cout<<cm+co<<endl;
    }
    return 0;
}




// Project Euler #10: Summation of primes
#include <bits/stdc++.h>
using namespace std;

bool isprime(long long n){
        if(n==2){
            return 1;
        }
        if(n%2==0)return 0;
        if(n==3)return 1;
        if(n%3==0)return 0;
        for(int i=5;i<=sqrt(n);i=i+6){
            if(n%i==0){
                return 0;
            }
            if(n%(i+2)==0){
                return 0;
            }
        }
        return 1;
        
    }
    

int main(){
    int t;
    cin >> t;
        vector<int>prime;
    prime.push_back(2);
    prime.push_back(3);
    for(long long i=5;i<=1000000;i=i+6){
        if(isprime(i)==1){
            prime.push_back(i);
        }
        if(isprime(i+2)==1){
            prime.push_back(i+2);
        }
    }
    
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long long sum=0;
        for(int i=0;prime[i]<=n;i++){
            sum+=prime[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}





// last question -- Graph Breakdown
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