#include<iostream>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    vector<ll> min,max;
    ll a,b,n,sum,mins=0,maxs=0;
    cin>>n>>sum;
    for(ll i=0;i<n;i++)
    {
        cin>>a>>b;
        min.push_back(a);
        max.push_back(b);
        mins+=a;maxs+=b;
    }
    if(mins>sum || maxs<sum)
        {cout<<"NO\n";return 0;}
    cout<<"YES\n";
    sum-=mins;
    ll f=1;
    while(f)
    {
        for(ll i=0;sum && i<n;i++)
        {

        if(min[i]+1<=max[i])
        {   min[i]++;sum--;}
        }
        if(!sum)
            f=0;
    }
    for(ll i=0;i<n;i++)
        cout<<min[i]<<' ';
    cout<<'\n';



}