#include<bits/stdc++.h>
using  namespace std;
typedef long long  ll;
ll gcd(ll a,ll b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
int main()
{
    ll a,b,g;cin>>a>>b;g=gcd(a,b);a/=g;b/=g;
    if(abs(a-b)<=1)cout<<"Equal\n";
    else if(a>b)cout<<"Masha\n";
    else cout<<"Dasha\n";
}