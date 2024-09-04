#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int a=0;
	    int b=0;
	    if((y>=x*2)||(x>=y*2)){
	        cout<<"0\n";
	    }
	    else if(y>=x){
	        a=y/2;
	        a=x-a;
	        b=(x*2);
	        b=b-y;
	        cout<<min(a,b)<<"\n";
	    }else{
             a=x/2;
	        a=y-a;
	        b=(y*2);
	        b=b-x;
	        cout<<min(a,b)<<"\n";
	       
	        
	    }
	}

}