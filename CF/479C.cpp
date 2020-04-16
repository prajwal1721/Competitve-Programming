// /prajwal

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        ll n,i=0,t;cin>>n;
        vector<pair<ll,ll>>v;
        for(ll i=0;i<n;i++)
        {
            ll a,b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end());
        ll cur=0;
        for(ll i=0;i<n;i++)
        {
            if(min(v[i].first,v[i].second) >=cur)
            cur=max(cur,min(v[i].first,v[i].second));
            else cur=max(v[i].first,v[i].second);
        }    
        cout<<cur<<"\n";
}