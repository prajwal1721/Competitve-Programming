#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;cin>>n;
    ll i=1,count=0;
    for(;i<=n;i++)
    {
        if(n/i-i+1>0)
        count+=(ll)n/i-i+1;
    }
    cout<<count<<"\n";
}