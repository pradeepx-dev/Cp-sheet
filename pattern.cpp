#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int space=n-1;
    int star=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        space--;
        star = star+2;
        cout<<endl;
    }

    return 0;
}