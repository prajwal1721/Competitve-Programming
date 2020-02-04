#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;
    cin>>n;
    while(n--)
    {
        ll a,b,c,r;
        cin>>a>>b>>c>>r;
        ll ans=(b-c-r!=0)?b-c-r:0+(c-r-a);
        if(ans<0)ans=0;
        cout<<ans<<"\n";
    }
}