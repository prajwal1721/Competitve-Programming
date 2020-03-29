// /prajwal

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        map<ll,ll>mp;
        ll n,t;cin>>n;
        while (n--)
        {
            cin>>t;
            if(mp[t]>0)mp[t]+=1;
            else mp[t]=1;
        }
        ll m,i=0;cin>>m;
        vector<ll> a,b;
        while (i<m)
        {
            cin>>t;a.push_back(t);i++;
        }i=0;
        while (i<m)
        {
            cin>>t;b.push_back(t);i++;
        }
        vector<tuple<ll,ll,ll>> p;
        for(ll i=0;i<m;i++)
        {
            // if(mp[a[i]]>0)
            p.push_back({mp[a[i]],mp[a[i]]+mp[b[i]],i+1});
        }
        sort(p.begin(),p.end(),greater<tuple<ll,ll,ll>> ());
        ll ans=0;
        tie(t,t,ans)=*p.begin();
        cout<<ans<<"\n";

        

}