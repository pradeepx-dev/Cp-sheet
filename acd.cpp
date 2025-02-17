#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        string s;   cin>>s;
        int one=0,curz=0,maxz=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                one++;
                curz=0;
            }
            else{
                curz++;
                maxz=max(maxz,curz);
            }
        }
        cout<<one+maxz<<endl;
    }
}