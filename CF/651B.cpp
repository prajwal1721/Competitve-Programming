#include<iostream>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll t,n,cn;cin>>n;cn=n;
    ll a[10001],m=0;
    while (cn--)
    {
        cin>>t;a[t]++;
        if(a[t]>m)m=a[t];
    }
    cout<<n-m<<"\n";
    
}