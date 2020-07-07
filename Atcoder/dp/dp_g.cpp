// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:
*/



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
vector<ll> topological;
vector<ll> adj[100006];
ll Visit[100005]={0};
void dfs(int n)
{
    Visit[n]=1;
    for(auto i: adj[n])
    {
        if(Visit[i]==0)dfs(i);
    }
    if(Visit[n]==1)
        {
            topological.push_back(n);
            Visit[n]=2;
        }
}
void solve()
{
    ll n,t,m,u,v;cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    for(int i=1;i<=n;i++)
        Visit[i]=0;
    for(int i=1;i<=n;i++)
       if(!Visit[i])
        dfs(i);
    reverse(topological.begin(),topological.end());
    // for(auto i:topological)cout<<i<<" ";cout<<"\n";
    ll dist[n+1]={0},mx=0;
    for(auto i:topological)
    {
        for(auto j:adj[i])
            dist[j]=max(dist[j],dist[i]+1);
    }
    for(int i=1;i<=n;i++)mx=max(mx,dist[i]);
    cout<<mx<<"\n";
}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}