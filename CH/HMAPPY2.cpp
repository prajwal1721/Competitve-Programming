#include<iostream>
using namespace std;
    typedef long long ll;
ll gcd(ll a, ll b )
{
    if(!a)return b;
    return gcd(b%a,a);
}
int main()
{
    ll q;cin>>q;
    while (q--)
    {
        /* code */
    
    ll n,a,b,k;cin>>n>>a>>b>>k;
    ll lcm=a*b/gcd(a,b);
    ll appy=(ll)n/a-(ll)n/(lcm);
    ll chef=(ll)n/b-(ll)n/(lcm);
    if(chef+appy>=k)cout<<"Win\n";
    else cout<<"Lose\n";
    }
}