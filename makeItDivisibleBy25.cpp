#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(i,n) for(int i=0;i<n;i++)

void solve()
{
    string s;
    cin>>s;
    unordered_map<ll,ll>mpp;
    ll n=s.length();
    fl(i,n)
    {
        mpp[(ll)(s[i]-'0')]++;
    }
    ll ans=LONG_LONG_MAX;
    bool ok=false;
    if(mpp[0]>1)
    {
        ll c=0;ll in;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0'&&c>0)
            {
                in=i;
                ok=true;
                break;
                c++;
            }
            else if(s[i]=='0')c++;
        }
        if(ok){
        in=n-in-2;
        ans=min(ans,in);}
    }
    ok=false;
    if(mpp[0]>0&&mpp[5]>0)
    {
        ll c=0;ll in;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='5'&&c>0)
            {
                in=i;
                ok=true;
                break;
                c++;
            }
            else if(s[i]=='0')c++;
        }
        if(ok){
        in=n-in-2;
        ans=min(ans,in);}
    }
    ok=false;
    if(mpp[7]>0&&mpp[5]>0)
    {
        ll c=0;ll in;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='7'&&c>0)
            {
                in=i;
                ok=true;
                break;
                c++;
            }
            else if(s[i]=='5')c++;
        }
        if(ok){
        in=n-in-2;
        ans=min(ans,in);}
    }
    ok=false;
    if(mpp[2]>0&&mpp[5]>0)
    {
        ll c=0;ll in;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='2'&&c>0)
            {
                in=i;
                ok=true;
                break;
                c++;
            }
            else if(s[i]=='5')c++;
        }
        if(ok){
        in=n-in-2;
        ans=min(ans,in);}
    }
    if(mpp[0]>0)
    {
        ans=min(ans,n-mpp[0]);
    }
    cout<<ans<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}