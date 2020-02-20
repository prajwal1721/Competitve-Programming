#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    vector<ll> v1,v2;
    ll n,a,b,cn,k;cin>>n>>k;cn=n;
    while (cn--)
    {
        cin>>a;v1.push_back(a);
    }cn=n;
    while (cn--)
    {
        cin>>a;v2.push_back(a);
    }
    ll sum=0,c=0;
    for(ll i=0;i<n;i++)
    {
        if(v1[i]<=v2[i]){c++;sum+=v1[i];v2[i]=-1;v1[i]=-1;}
    }
        vector<pair<ll,ll>>p;
    if(c<k)
    {
        for(ll i=0;i<n;i++)
        {
            if(v1[i]!=-1)p.push_back(pair<ll,ll>(v1[i]-v2[i],i));
            else p.push_back(pair<ll,ll>(INT16_MAX,i));
        }
        sort(p.begin(),p.end());
        for(auto i=p.begin();i!=p.end();i++)
        {
            if(c==k)break;
            c++;
            sum+=v1[(*i).second];
            v1[(*i).second]=-1;
            v2[(*i).second]=-1;
        }
    }
    for(ll i=0;i<n;i++)
    {
        if(v2[i]!=-1)
        sum+=v2[i];
    }
    cout<<sum<<"\n";
}