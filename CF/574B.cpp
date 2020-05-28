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



typedef  int ll;
ll edge[4001][4001]={0};
void solve()
{
    ll a,b,n,m;cin>>n>>m;
    
    // for(int i=1;i<n+2;i++){par[i]=i;sz[i]=1;}
    ll sz[n+1]={0};
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        sz[a]++;
        sz[b]++;
        if(a>b){ll t=a;a=b;b=t;}
        edge[a][b]=1;
    }
    // for(ll i=1;i<=n;i++){sz[i]=adj[i].size();}
    ll mn=3*n;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=i+1;j<=n;j++)
        {
            if(edge[i][j]==1)
            for(ll k=j+1;k<=n;k++)
            {
                if(edge[j][k]==1 && edge[i][k]==1)
                {
                    // cout<<sz[i]+sz[j]+sz[k]-6<<"\n";
                    mn=min(mn,sz[i]+sz[j]+sz[k]-6);
                }
            }
        }
    }
    if(mn==3*n)mn=-1;
    cout<<mn<<"\n";

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