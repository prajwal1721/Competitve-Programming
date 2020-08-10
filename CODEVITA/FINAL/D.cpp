#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b))
#define bits(x) __builtin_popcountll(x)
#define vi              vector<int>
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())



typedef long long int ll;
vector<ll> adj[70001];
ll l_visited[70001]={0};
vector<pair<ll,ll>> pr;
ll visit[70001]={0};
ll not_v,not_u;
void dfs(ll n)
{
    if(visit[n])return ;
    l_visited[n]++;
    visit[n]=1;
    for(auto i:adj[n]){
        if((not_v==i && not_u==n )||(not_v==n && not_u==i ))continue;
        dfs(i);
    }
}
void solve()
{
    ll n,t,m;cin>>n>>m;
    for(int i=0;i<n;i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        pr.push_back({u,v});
    }
    for(int i=0;i<m;i++)
    {
        for(int ii=0;ii<=m;ii++)visit[ii]=0;
        dfs(i);
    }
    ll f=0;
    for(int i=0;i<m;i++){
        if(l_visited[i]!=m){f=1;cout<<i<<"\n";}
    }
    if(!f)cout<<"-1\n";

}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout<<t<<"Hi test complete\n";
            solve();


    return 0;
}