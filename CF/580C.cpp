// /prajwal
// reamining
#include <bits/stdc++.h>
typedef long long ll;
#define MAX 100005
using namespace std;
ll ans=0;
vector<ll> dat[MAX];
ll visited[MAX]={0};
vector<ll>v;
void dfs(ll s,ll m ,ll cur,ll par)
{
    if(visited[s])return;
    // cout<<s<<" "<<cur<<"\n";
    if(v[s]==1)cur++;
    else cur=0;
    if(cur>m)return ;
    if(dat[s].size()==1 && dat[s][0]==par){ans++;}
    visited[s]=1;
    for(auto k:dat[s])
        dfs(k,m,cur,s);
}
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        ll n,m,t,cn;cin>>n>>m;cn=n;
        v.push_back(0);
        while (cn--)
        {
            cin>>t;v.push_back(t);            
        }
        cn=n-1;
        ll u;
        while (cn--)
        {
            cin>>u>>t;dat[u].push_back(t);dat[t].push_back(u);
        }
        // ll visited[n+1]={0};
        ll cur=0;
        dfs(1,m,cur,0);
    cout<<ans<<"\n";
}