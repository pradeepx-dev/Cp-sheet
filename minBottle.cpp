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
        int n,x;
	    cin>>n>>x;
    
	    float total= 0;
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        total+= a;
	    }
	    int k = ceil(total/x);
	    cout<<k<<endl;

    }
    return 0;
}