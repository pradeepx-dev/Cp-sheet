// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int minLCM= INT_MAX;
//         int a=0,b=0;
//         for(int i=1;i<(n/2)+1;i++){
//             int t1=i;
//             int t2=n-t1;
//             // hcf() * lcm()=a*b
//             int lcm= (t1*t2)/__gcd(t1,t2);
//             if(lcm<minLCM){
//                 a=t1;
//                 b=t2;
//                 minLCM=lcm;
//             }
//         }
//         cout<<a<<" "<<b<<endl;
//     }
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a=0,b=0;
//         for(int i=1;i<(n/2)+1;i++){
//             int t1=i;
//             int t2=n-t1;
//             if(t2%t1==0){
//                 a=t1;
//                 b=t2;

//             }
//         }
//         cout<<a<<" "<<b<<endl;
//     }
//     return 0;
// }



// -----final answer-------->
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
        int minLCM= INT_MAX;
        int a=1,b=1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                int t1=i;
                int t2=n-t1;
                int lcm= (t1*t2)/__gcd(t1,t2);
                if(lcm<minLCM){
                    a=t1;
                    b=t2;
                    minLCM=lcm;
                }
                int a1=n/i;
                int b1=n-a1;
                lcm= (a1*b1)/__gcd(a1,b1);
                if(lcm<minLCM){
                    a=a1;
                    b=b1;
                    minLCM=lcm;
                }
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}