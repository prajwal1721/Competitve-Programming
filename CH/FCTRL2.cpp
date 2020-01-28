#include<iostream>// read tutorial https://blog.codechef.com/2009/07/02/tutorial-for-small-factorials/
using namespace std;
    typedef long long ll;
ll cal_fact(ll n, ll a);
int main()
{
    ll a[101];
    a[0]=1;
    for(ll i=1;i<=100;i++)
        a[i]=cal_fact(i,a[i-1]);
    for(ll i=1;i<=100;i++)
        cout<<a[i]<<"\n";
    ll n,t;
    cin>>n;
    while(n--)
    {
        cin>>t;cout<<a[t]<<"\n";
    }
}
ll cal_fact(ll n, ll a)
{
    return n*a;
}