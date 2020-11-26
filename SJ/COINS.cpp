#include<iostream>
#include<cmath>
#include<map>
using namespace std;
typedef long long ll;
ll ans(ll a);
map<ll,ll> p;
int main()
{
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        cout<<ans(n)<<"\n";
        p.clear();
    }
}
ll ans(ll a)
{
    if(p[a])return p[a];
    if(a==0) return 0;
    p[a]=max(a,ans((ll)a/2)+ans((ll)a/3)+ans((ll)a/4));
    return max(a,ans((ll)a/2)+ans((ll)a/3)+ans((ll)a/4));
}