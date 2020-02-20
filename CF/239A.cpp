#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;

    vector<ll >v;
    ll y,i=0,k,n;cin>>y>>k>>n;
        ll t=n,f=1;
    while(1)
    {
        ll ans=(n/k-i)*k-y;
        if(ans<=0)break;
        v.push_back(ans);
        f=0;i++;
    }
    if(f)cout<<"-1";
    else
        for(auto j=v.rbegin();j!=v.rend();j++)cout<<*j<<" ";
        cout<<"\n";
}