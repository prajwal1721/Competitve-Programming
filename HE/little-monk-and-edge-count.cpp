// https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/little-monk-and-edge-count/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int ans[100000]={0};
int  dfs(ll u,ll n, vector<ll> data[], bool visited[])
{
    visited[u]=1;
    ans[u]=0;
    for(auto i=data[u].begin();i!=data[u].end();i++)
    {
        if(!visited[*i])
            {ans[u]+=dfs(*i,n,data,visited);}
        
    }
    ans[u]++;
    return ans[u];
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    ll n,m,u,v;cin>>n>>m;
    vector<ll> data[n+2];map<ll,pair<ll,ll> >mp;
    int i=1;
    while (i<n)
    {
        cin>>u>>v;data[u].push_back(v);data[v].push_back(u);
        if(u>v){int te=u;u=v;v=te;}
        mp[i]={u,v};i++;
    }
    ll q;
        tie(u,v)=mp[1];
    bool visited[n+2]={0};
    dfs(u,n,data,visited);
    while (m--)
    {
        cin>>q;
        tie(u,v)=mp[q];
        // cout<<u<<"=="<<v<<"\n";
        // cout<<ans[u]<<" "<<ans[v]<<"\n";
        if(ans[u]<ans[v])ans[v]=n-ans[u];
        if(ans[u]>ans[v])ans[u]=n-ans[v];
        // cout<<ans[u]<<"======"<<ans[v]<<"============\n";
        cout<<(ans[u])*(ans[v])<<"\n";
    }
}
/*
5 4
1 2
1 3
2 4
2 5
1
2
3
4
*/
