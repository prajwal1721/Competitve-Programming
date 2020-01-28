#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    ll e,r,t=0,n,L,a,count=0;
    cin>>n>>L>>a;
    for(ll i=0;i<n;i++)
    {
        cin>>e>>r;
        count+=(e-t)/a;
        t=e+r;
        // cout<<t<<" "<<e<<":"<<r<<'\n';
    }
    L-=t;
    // cout<<L;
    if(L>0)
    {
        count+=(int)(L/a);
    }
    cout<<count<<"\n";
}