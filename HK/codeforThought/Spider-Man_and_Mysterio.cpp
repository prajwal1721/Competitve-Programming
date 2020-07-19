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
ll visit[100005]={0};
void solve()
{
    ll c_w,c_s,u,v,n,t,m;cin>>n>>m>>c_s>>c_w;
    for(int i=0;i<=n;i++){visit[i]=0;adj[i].clear();}
    for(int i=0;i<m;i++){cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll ans=0;
    for(int i=1;i<=n;i++)
        {
            if(!visit[i])
                {
                    
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