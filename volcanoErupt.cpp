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
        int n,p;
        cin>>n,p;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int p1=0, p2=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                p1=i;
                p2=i;
            }
        }
            int count1=0, key=0;
            for(int i=p1;i>=0;i--){
                while(true){Ahista Ahista
                    if(v[i]<=count1){
                        v[i]=key;
                        break;
                    }else{
                        count1+=p;
                        key++;
                    }
                }
            }
            for(int i=p2;i<n;i++){
                while(true){
                    if(v[i]<=count1){
                        v[i]=key;
                        break;
                    }else{
                        count1+=p;
                        key++;
                    }
                }
            }

    }
    return 0;
}