/* 
    topological sort with cycle detection

    1-->2-->3
    ^   ^  ^ |
    |   | /  |
    |   |/   |
    4-->5    6

    4 5 1 2 3 6

 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> tsort;
vector<ll> adj[101];
ll visit[100]={0};
ll f=0;
void dfs(ll n)
{
    visit[n]=1;
    for(auto a:adj[n])
    {
        if(visit[a]==0)
            dfs(a);
        else if(visit[a]==1)f=1;
    }
    visit[n]=2;
    tsort.push_back(n);
}
int main()
{
    ll n,m;cin>>n>>m;
    ll t1,t2;
    for(int i=0;i<m;i++){cin>>t1>>t2;adj[t1].push_back(t2);}
    for(int i=1;i<=n;i++)
        if(visit[i]==0)dfs(i);
    if(f){cout<<"Cycle detected\n";return 0 ;}
    for(auto i=tsort.rbegin();i!=tsort.rend();i++)
        cout<<*i<<" ";cout<<"\n";
}