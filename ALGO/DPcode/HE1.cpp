#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007;
ll fact[100000]={0};
ll f(ll a)
{
    if(fact[a]!=0)return fact[a];
    else 
    {
        ll ans= (f(a-1)*a)%mod;
        fact[a]=ans;
        return ans;
    }
}
int main()
{
    ll n;cin>>n;
    fact[0]=1;fact[1]=1;
    while(n--)
    {
        ll t;
        cin>>t;
        cout<<f(t)<<"\n";
    }
}