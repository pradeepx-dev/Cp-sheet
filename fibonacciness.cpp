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
        int n=5;
        int array[n];
        for(int i=0;i<n-1;i++) cin>>array[i];
        // for(int i=0;i<n;i++) cout<<array[i]<<" ";
        // cout<<endl;

        int c = 1;
        int temp = array[2];
        int temp1 = array[3];
        array[2] = array[0]+array[1];
        array[3] = temp;
        array[4] = temp1;
        bool flag=false;
        for(int i=1;i<n-2;i++){
            if(array[i]+array[i+1]==array[i+2]){
                c++;
            }
            else{
                flag=true;
                break;
            }
        }
        if(flag){
            c=0;
            array[2]=array[3]-array[1];
            for(int i=1;i<3;i++){
            if(array[i]+array[i+1]==array[i+2]){
                c++;
            }else{
                c=0;
            }
            }
        }
        if(c!=2&&flag){
            array[2]=array[0]+array[1];
            c=1;
            if(array[1]+array[2]==array[3]){
                c++;
            }
        }

        cout<<c<<endl;

    }
    return 0;
}