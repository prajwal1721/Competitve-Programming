#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int main()
{
    ll n;cin>>n;
    while(n!=0)
    {
        ll ans=0;
        for(ll i=1;i<=n;i++)
        {
            ans+=(n-i+1)*(n-i+1);
        }
        cout<<ans<<"\n";
        cin>>n;
    }
}