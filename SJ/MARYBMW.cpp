// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:
*/


/*
---------------TLE---------------SOME OPTIMIZATION REQ

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
#define MAX 50005

typedef long long int ll;

ll par[MAX]={0},sz[MAX]={0};
vector<pair<ll ,ll>>adj[MAX];
ll find(ll a)
{
    if(a==par[a])return a;
    return  par[a]=find(par[par[a]]);
}
void uni(ll a,ll b)
{
    if(a==b)return ;
    if(sz[a]<sz[b]){ll t=a;a=b;b=t;}
    par[b]=a;
    sz[a]+=sz[b];
}
ll mx=INFINITY,f=1,visited[MAX]={0};
void dfs(ll a,ll n )
{
    if(!f)return;
    if(a==n)f=0;
    visited[a]=1;
    for(auto u:adj[a])
            if(visited[a])
            {
                mx=min(mx,u.first);
                dfs(u.second,n);
            }
}
void solve()
{
    ll a,b,w,n,m;cin>>n>>m;
    vector<tuple<ll,ll ,ll>>v;
    mx=INFINITY;f=1;
    for(int i=1;i<=m;i++){cin>>a>>b>>w;v.push_back({w,a,b});}
    sort(v.begin(),v.end(),greater<tuple<ll,ll,ll>>());
    for(int i=1;i<=n+2;i++){adj[i].clear();visited[i]=0;par[i]=i;sz[i]=1;}
    for(int i=0;i<m;i++)
    {
        tie(w,a,b)=v[i];
        ll c_a=a,c_b=b;
        b=find(b);
        a=find(a);
        if(a!=b)
        {
            uni(a,b);
            adj[c_a].push_back({w,c_b});
            adj[c_b].push_back({w,c_a});
        }
    }
    if(sz[n]==1){cout<<"-1\n";return;}
    dfs(1,n);
    // for(int i=1;i<=n;i++){adj[i].clear();visited[i]=0;}
    cout<<mx<<"\n";
    
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

*/

#include<bits/stdc++.h>
#define ll long long 
#define mp make_pair
#define pb push_back
#define MAX 50005
using namespace std;
vector< pair<ll,pair<int,int> > > v;
int parent[MAX];
int rnk[MAX],n;
void __init__()
{
	for(int i=1;i<=n;i++)
	{
		parent[i] = i;
		rnk[i] =0;
	}
}
int find(int x)
{
	while(x != parent[x])
	{
		parent[x] = parent[parent[x]];
		x = parent[x];
	}
	return x;
} 
void Union(int x1,int y1)
{
	if(rnk[x1] > rnk[y1])
	{
		parent[y1] = x1;
		rnk[x1] = rnk[x1] + rnk[y1];
	}
	else
	{
		parent[x1] = y1;
		rnk[y1] = rnk[y1] + rnk[x1];
	}
}
bool ok()
{
	int x = find(1);
	int y = find(n);
	if(x==y)
		return true;
	else
		return false;
}
bool check(int m)
{
	__init__();
	for(int i=0;i<m;i++)
	{
		int x = find(v[i].second.first);
		int y = find(v[i].second.second);
		
		if(x==y)
			continue;
		Union(x,y);
		if(ok())
		{
			cout << v[i].first << endl;
			return true;
		}
	}
	return false;
}
int main()
{
	int t,m,a,b;
	ll c;
	scanf("%d",&t);
	while(t--)
	{
		v.clear();
		scanf("%d %d",&n,&m);
		for(int i=0;i<m;i++)
		{
			scanf("%d %d %lld",&a,&b,&c);
			v.pb(mp(c,mp(a,b)));
		}
		sort(v.rbegin(),v.rend());
		if(!check(m))
			printf("-1\n");
	}
	return 0;
}