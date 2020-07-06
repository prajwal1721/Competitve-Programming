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
ll visit[200005]={0},depth[200005]={0};
vector<ll> adj[200005];
ll child[200005]={0};
ll call(ll n)
{
    if(visit[n])return 0;
    visit[n]=1;
    for(auto u:adj[n])
    {
        if(!visit[u])
        {
            depth[u]=depth[n]+1;
            child[n]+=call(u);
        }
    }
    return  child[n];
}
void solve()
{
    ll n,t,m;cin>>n>>m;
    for(int i=1;i<n;i++){ll v,u;cin>>v>>u;adj[v].push_back(u);adj[u].push_back(v);}
    for(int i=1;i<=n;i++)child[i]=1;
    depth[1]=1;
    ll ans[n+1]={0};
    call(1);
    for(int i=1;i<=n;i++)ans[i]=child[i]-depth[i];
    ll f_ans=0;
    // for(int i=0;i<=n;i++)cout<<child[i]<<" ";cout<<"\n";
    // for(int i=0;i<=n;i++)cout<<depth[i]<<" ";cout<<"\n";
    sort(ans+2,ans+n+1,greater<ll> ());
    // for(int i=0;i<=n;i++)cout<<ans[i]<<" ";cout<<"\n";
    for(int i=1;i<=n-m;i++)f_ans+=ans[i];
    cout<<f_ans<<"\n";
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