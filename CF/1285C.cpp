#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll n,a=0,b=0;cin>>n;
    for(ll i=sqrt(n);i>0;i--)
    {
        if(n%i==0 && gcd(n/i,i)==1 ){a=i;b=n/i;break;}
    }
    cout<<a<<" "<<b<<"\n";
}