#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;cin>>q;
    while(q--)
    {
        ll n,t=0;cin>>n;ll cn=n;
        ll v[n];
        while(n--)
        {
            cin>>v[t++];
        }     
        if(cn&1)
        {
            ll ans=0;
            for(auto i=0;i<cn;i+=2)
                ans=ans^v[i];
            cout<<ans<<"\n";
        }
        else 
            cout<<0<<"\n";
    }
}