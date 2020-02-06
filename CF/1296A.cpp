#include<iostream>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;cin>>q;
    while(q--)
    {
        vector<ll> v;
        ll n,odd=0,even=0,cn,t;cin>>n;cn=n;
        while(cn--)
        {
            cin>>t;
            if(t&1)odd++;
            else even++;
        }
        if(!(n&1) && !even || !odd  )cout<<"NO\n";
        else cout<<"YES\n";
    }
}