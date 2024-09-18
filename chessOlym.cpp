#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int temp = x + (y * 0.5);
    int temp1 = z + (y * 0.5);
    if(temp > temp1 ) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    float temp = 4-(x +y +z);
    temp+=x+0.5*y;
    if(temp > 2.0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}