// /prajwal
// reamining
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll ans=0;
void dfs(vector<ll> data[],ll visited[],ll s,ll pre,ll m,vector<ll>v,ll f)
{

    visited[s]=1;
    // cout<<s<<"\n";
    if(v[s-1]==1)pre++;
    else pre=0;
    if(pre>m)f=1;
    if( !f && data[s].size()==1 && s!=1)ans++;
    else if(!f)
    for(auto i=data[s].begin();i!=data[s].end();i++)    
    {
        if(!visited[*i])dfs(data,visited,*i,pre,m,v,f);
    }
}
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        ll n,m,t,cn;cin>>n>>m;cn=n;
        vector<ll> v;
        vector<ll>data[n+1];
        while (cn--)
        {
            cin>>t;v.push_back(t);            
        }
        cn=n-1;
        ll u;
        while (cn--)
        {
            cin>>u>>t;data[u].push_back(t);data[t].push_back(u);
        }
        ll visited[n+1]={0};
        dfs(data,visited,1,0,m,v,0);
    cout<<ans<<"\n";
}