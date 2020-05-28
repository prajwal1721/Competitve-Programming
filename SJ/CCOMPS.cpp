// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments: getting wrong on this test case
    1
6
1 5
1 1
1 2
1 2
1 2
1 2
 ans=3
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
vector<ll> adj[1005];
vector<ll> adj2[1005];
ll visited[1005]={0};

void dfs1(ll n)
{
    if(visited[n])return;
    visited[n]=1;
    for(auto i:adj[n])
    {
        dfs1(i);
    }
}
void solve()
{
    ll w,c,t,n;cin>>n>>w;
    for(int i=0;i<w;i++)
    {
            cin>>t>>c;adj[t].push_back(c);
            // adj[c].push_back(t);
    }
   ll mx=0;
    for(int i=1;i<=n;i++)
    {
        if(!visited[i]){dfs1(i);mx++;}
    }
   
    cout<<mx<<"\n";
}


int main()
{ 
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    // ll t;cin>>/t;
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}



