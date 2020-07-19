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
vector<ll>adj[100005];
ll par[100005]={0};
ll sz[100005]={0};
ll visit[100005]={0};
ll find(ll a)
{
    while(par[a]!=a)
        return par[a]=find(par[a]);
    return a;
}
void union_web(ll a,ll b)
{
    a=find(a);b=find(b);
    if(a==b)return;
    if(sz[a]<sz[b])swap(a,b);
    par[b]=a;
    sz[a]+=sz[b];
}
void solve()
{
    ll c_w,c_s,u,v,n,t,m;cin>>n>>m>>c_s>>c_w;
    for(int i=0;i<=n;i++){par[i]=i;sz[i]=1;visit[i]=0;}
    for(int i=0;i<m;i++){cin>>u>>v;
        union_web(u,v);
    }
    ll ans=0;
    for(int i=1;i<=n;i++)
        {
            ll p=find(i);
            if(!visit[p])
                {
                    ans+=min((sz[p]-1)*c_w+c_s,sz[p]*c_s);
                    visit[p]=1;
                }
        }
    cout<<ans<<"\n";
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