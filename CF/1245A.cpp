#include<iostream>
using namespace std;
    typedef long long ll;
ll gcd(ll a, ll b);
int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll a,b,nb=0,nw=1;
        cin>>a>>b;
        ll i=1,lcm=gcd(a,b);
        
        cout<<nw<<" "<<nb;
        if(nw>nb )cout<<"Finite\n";
        else cout<<"Infinite\n";
    }
}
ll gcd(ll a, ll b)
{
    ll r,ca=a,cb=b;
    do
    {
        r=a%b;
        a=b;
        b=r;
    }
    while(r);
    return a;
}