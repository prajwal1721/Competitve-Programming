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
void solve()
{
    ll n,t,m;cin>>n;
    ll u,w;
    m=n-1;
    vector<ll>v;v.push_back(0); for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    vector<pair<ll,ll>> adj[n+1];
    for(int i=0;i<m;i++){cin>>u>>w;adj[u].push_back({i+2,w});adj[i+2].push_back({u,w});}
    // for(int i=1;i<=n;i++)
    // {
        // cout<<i<<"::";
        // for(auto j:adj[i])cout<<j.first<<" ";
        // cout<<"\n";
    // }
    ll dp[n+1]={0},ans=n,visit[n+1]={0};
    queue<ll> q;q.push(1);
    dp[1]=0;
    while(!q.empty())
    {
        t=q.front();q.pop();
        visit[t]=1;
        for(auto i:adj[t])
        {
            if(!visit[i.first] && v[i.first]>=dp[t]+i.second)
            {   
                // cout<<v[i.first]<<" "<<dp[t]+i.second<<"\n";
                dp[i.first]+=max(0LL,max(dp[t]+i.second,i.second));
                ans--;
                q.push(i.first);
            }
        }
    }
    
    cout<<ans-1<<"\n";
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