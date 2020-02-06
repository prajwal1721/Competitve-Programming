#include<iostream>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;cin>>q;
    while(q--)
    {
        ll n,ans=0;cin>>n;
    while(n>=10)
    {
        ans+=(n/10)*10;
        n=n/10+n%10;
    }
    cout<<ans+ n%10<<"\n";
    }
}