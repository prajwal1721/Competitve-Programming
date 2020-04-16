#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;cin>>n;
    string a,b;cin>>a>>b;
    vector<ll>s1,s2;
    ll ans=0;
    for(ll i=0;i<n;)
    {
        if(a[i]!=b[i])
        {
            if(i+1<n && a[i+1]!=b[i+1] && a[i]!=a[i+1])
            {ans++;i+=2;}
            else
            {ans++;i++;}
        }
        else i++;
    }
    cout<<ans<<"\n";
}