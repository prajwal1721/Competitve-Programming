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
ll par[1004],sz[1004]={0};
ll find(ll a)
{
    if(a==par[a])return a;
    return par[a]=find(par[a]);
}
void un(ll a,ll b)
{
    a=find(a);
    b=find(b);
    if(a==b)return;
    if(sz[a]<sz[b]){ll t=a;a=b;b=t;}
    sz[a]+=sz[b];
    par[b]=a;
}
void solve()
{
    ll N,cost,m;cin>>cost>>N>>m;
    vector<tuple<ll,ll,ll>>q;
    ll a,b,w;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b>>w;
        q.push_back({w,a,b});
        // cout<<a<<b<<w<<"\n";
    }
    sort(q.begin(),q.end());
    ll ans=0;
    for(int i=1;i<=N;i++){par[i]=i;sz[i]=1;}
    ll visited[N+2]={0};
    for(int i=0;i<m;i++)
    {
        tie(w,a,b)=q[i];
        if(find(a)!=find(b))
        {
            ans+=w;
            un(a,b);
        }
    }
    cout<<cost*ans<<"\n";
}


int main()
{ 
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            solve();
        }


    return 0;
}