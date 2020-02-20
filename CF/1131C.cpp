#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll t,cn,n;cin>>n;cn=n;
    vector<ll> v;
    while (n--)
    {   
        cin>>t; v.push_back(t);
    }
    sort(v.begin(),v.end());
    ll ans[cn];
    ll st=ceil((float)cn/2)-1;
    ll fwd=st,bwd=st;
    ll i=0;
    // cout<<st<<"\n";
    for(i=0;i<cn;)
    {
        // cout<<bwd<<":"<<fwd<<"\n";
        if(i<cn)
            ans[bwd--]=v[i++];
        if(i<cn)
            ans[++fwd]=v[i++];
    }
    for(i=0;i<cn;i++)cout<<ans[i]<<" ";
    cout<<"\n";
}