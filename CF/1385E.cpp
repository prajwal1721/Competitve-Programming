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
vector<ll> adj_un[200005];
vector<ll> adj[200005];
ll visit[200005]={0};
ll t_visit[200005]={0};
ll fla=0;
vector<ll> t_sort;
vector<pair<ll,ll>> ans;
void  topological(ll n)
{
    t_visit[n]=1;
    for(auto u: adj[n])
    {
        if(!t_visit[u])
            {
                topological(u);
            }
        else if(t_visit[u]==1){fla=1;return;}
    }
    t_visit[n]=2;
    t_sort.push_back(n);
}

void solve()
{
    ll n,t,m,d=0,u,v;cin>>n>>m;
    ll in[n+1]={0},out[n+1]={0};
    vector<ll> dir,undir;fla=0;
    for(int i=0;i<=n+1;i++){adj[i].clear();adj_un[i].clear();visit[i]=0;t_visit[i]=0;}
    for(int i=0;i<m;i++){cin>>t>>u>>v;
        if(!t)
        {
            adj_un[u].push_back(v);
            adj_un[v].push_back(u);
            undir.push_back(u);
            undir.push_back(v);
        }
        else 
            {
                in[v]++;out[u]++;
                adj[u].push_back(v);
                dir.push_back(u);
                // ans.push_back({u,v});
                d=1;
            }
    }
    for(int i=1;i<=n;i++)
        {
            if(!t_visit[i])
                topological(i);
            if(fla)break;
        }
    if(fla){cout<<"NO\n";return ;}
    reverse(t_sort.begin(),t_sort.end());
    map<pair<ll,ll>,ll> mp;
    for(auto ii:undir)
    {
        if(in[ii]==0 && out[ii]==0){
            for(auto j:adj_un[ii])
            {
                if(mp[{ii,j}]==0)
                    {
                        mp[{j,ii}]=1;
                        ans.push_back({ii,j});
                    }
            }
        }
    }
    cout<<"YES\n";
    for(auto o:ans)
    {
        cout<<o.first<<" "<<o.second<<"\n";
    }
}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            solve();
        }


    return 0;
}