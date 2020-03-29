
// /prajwal

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
        ll v[100007],temp=INT32_MAX;
void dfs(ll source,ll visited[],vector<ll> data[])
{
    visited[source]=1;
    for(auto it=data[source].begin();it!=data[source].end();it++)
    {
        if(!visited[*it])dfs(*it,visited,data);
    }
    temp=min(temp,v[source-1]);
}
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        ll n,cn,m,t,i=0;cin>>n>>m;cn=n;
        vector<ll> data[n+1];
        while (i<cn)
        {
            cin>>v[i++];
        }
        while (m--)
        {
            ll u,ve;cin>>u>>ve;
            data[u].push_back(ve);
            data[ve].push_back(u);
        }
        ll f=0,ans=0;
        // while (f!=1)
        // {
            ll visited[n+1]={0},pass=INT32_MAX;
            for(ll i=1;i<=n;i++)
            {
                temp=INT32_MAX;
                if(!visited[i])
                {
                    dfs(i,visited,data);
                ans+=temp;
                }
            }
        // }
        cout<<ans<<"\n";
        
}

        
        