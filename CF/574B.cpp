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
// ll par[4005],sz[4005]={0};
void solve()
{
    ll a,b,n,m;cin>>n>>m;
    // for(int i=1;i<n+2;i++){par[i]=i;sz[i]=1;}
    set<ll>adj[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        adj[a].insert(b);
        adj[b].insert(a);
    }
    ll sz[n+1];
    for(ll i=1;i<=n;i++){sz[i]=adj[i].size();}
    ll visited[n+1]={0};
    ll mn=3*n;
    map<tuple<ll,ll>,ll>mp;
    for(int i=1;i<=n;i++)
    {
        visited[i]=1;
        for(auto k:adj[i])
        {

        }
    }

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