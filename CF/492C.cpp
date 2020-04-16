#include<bits/stdc++.h>
using namespace std;
typedef long long ll;int main()
{
    ll s=0,n,m,k;cin>>n>>m>>k;
    
    vector<pair<ll, ll>>v;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v.push_back({b,a});
        s+=a;
    }
    sort(v.begin(),v.end(),[](pair<ll,ll>&p1,pair<ll,ll>&p2)->bool
    {
        if(p1.first==p2.first)
            return p1.second>p2.second;
        return p1.first<p2.first;
    });
    // cout<<"b\n";
    // for(ll i=0;i<n;i++)
    // {
        // cout<<v[i].first<<" "<<v[i].second<<"\n";
    // }
    // cout<<"vf\n";
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(s>=n*k)break;
        ll gr=v[i].second,c=v[i].first;
        if(m>gr &&  s<n*k)
        {
            ans+=min(n*k-s,m-gr)*c;
            s+=min(n*k-s,m-gr);
        }
        // cout<<ans<<" ";
    }
    cout<<ans<<"\n";
}