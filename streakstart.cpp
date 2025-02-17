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
        int n,x;cin>>n>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int lcount=0, fcount=0 , index;
        for(int i=1;i<n;i++){
            if(v[i] >= v[i-1]) lcount++;
            else{
                lcount++;
                fcount = max(fcount, lcount);
                index=i;
                lcount=0;
            }
        }
        if(lcount){
            fcount = max(fcount, lcount+1);
            index= -1;
        }
        cout<<fcount<<" "<<index<<endl;
    }
    return 0;
}