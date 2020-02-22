#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;

void addEdge(vector<ll> adj[],ll u, ll v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);

}
bool dfs(bool visited[],vector<ll> adj[],ll v,ll parent)
{   
    // if(visited[v] == true) return;
    visited[v] = true;
    cout<<v<<"->";

    for(auto it = adj[v].begin(); it != adj[v].end(); it++)
    {

        if(visited[*it] == false)
            return dfs(visited,adj,*it,v);
        else if(*it != parent)
        {
            return true;
        }
        

    }
    return false;
}

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll n,m,u,v;
    cin>>n>>m;
    vector<ll> adj[n+1];
    bool visited[n+1]={false};    
    for(ll i = 1; i <= m; i++)
    {
        cin>>u>>v;
        addEdge(adj,u,v);
    }    

    cout<<dfs(visited,adj,1,-1);
    // ll flag = 0;
    // for(ll i =1; i <= n ; i++)
    // {
    //     if(visited[i] == false)
    //     {
    //         flag = 1;
    //         break;
    //     }
    // }
    // if(m > n-1)
    //     flag=1;

    // if(flag)
    //     cout<<"NO\n";
    // else
    // {
    //     cout<<"YES\n";
    // }
    
    return 0;
}