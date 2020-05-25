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
    vector<ll>pr[100032];
void solve()
{
    ll n,m;cin>>n>>m;
    ll a,b;
    vector<pair<ll,ll>> edge;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        pr[a].push_back(b);
        pr[b].push_back(a);
        edge.push_back({a,b});
    }
    // for(int i=1;i<=n;i++){par[i]=i;sz[i]=1;}
    queue<ll >q;
    ll color[100032]={0},visited[100032]={0};

    for(int i=1;i<=n;i++){color[i]=-1;visited[i]=0;}
    set<ll>s1,s2;
for(int i=1;i<=n;i++)
    {
        if(visited[i] || pr[i].size()==0)continue;
        q.push(i);
        color[i]=0;
        s2.insert(i);
    while (!q.empty())
    {
        ll t=q.front();q.pop();
        if(visited[t])continue;
        visited[t]=1;
        for(auto i:pr[t])
        {
            if(color[i]==color[t]){cout<<"-1\n";return;}
            if(!visited[i])
            {color[i]=(color[t]+1)%2;
            if(color[i]==1)s1.insert(i);
            else if(color[i]==0) s2.insert(i);
            q.push(i);}
        }
    }
    }
    ll ans=0;
    cout<<s1.size()<<"\n";for(auto i:s1)cout<<i<<" ";cout<<"\n";
    cout<<s2.size()<<"\n";for(auto i:s2)cout<<i<<" ";cout<<"\n";
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