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
ll visited[1005]={0},ans=1;
ll check[1005]={0};
stack<ll> st;
set<ll> q;
int  dfs2(ll n)
{
    int c=0;
    if(visited[n])return 0;
    visited[n]=1;
    q.insert(n);
    // st.push(n);
    for(auto i:adj2[n])
    {
        if(!visited[i])
        c=max(c,dfs2(i)+1);
    }
    return c;
}
void dfs1(ll n)
{
    if(visited[n])return;
    visited[n]=1;
    for(auto i:adj[n])
    {
        dfs1(i);
    }
    st.push(n);
}
void solve()
{
    ll w,c,t,n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        for(int j=0;j<c;j++)
        {
            cin>>t;adj[t].push_back(i+1);
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])dfs1(i);
    }
    for(int i=1;i<=n;i++)
    {
        visited[i]=0;
        for(auto p:adj[i])
        {
            adj2[p].push_back(i);
        }
        adj[i].clear();
    }
    ll mx=1;
    while(!st.empty())
    {
        if(!visited[st.top()])
            {
                // cout<<st.top()<<" ";
                t=dfs2(st.top());
                for(auto s:q)
                {
                    
                }
                mx=max(t,mx);
            }
        if(mx==0)break;
        st.pop();   
    }
    for(int i=1;i<=n;i++)
    {visited[i]=0;adj2[i].clear();adj[i].clear();}
    cout<<mx+1<<"\n";
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





/*
working sol

#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

#define SET(p) memset(p, -1, sizeof(p))
#define CLR(p) memset(p, 0, sizeof(p))
#define MEM(p, v) memset(p, v, sizeof(p))
#define SZ(p) p.size()
#define PB(x) push_back(x)
#define pii pair< int, int >
#define ff first
#define ss second

const int MAX = 1024;
int Stack[MAX], top;
int Index[MAX], Lowlink[MAX], Onstack[MAX];
int Component[MAX], Indeg[MAX];
int idx, components;
vector< int > G[MAX];
vector< pii > edges;

void tarjan(int u) {
	int v, i;
	Index[u] = Lowlink[u] = idx++;
	Stack[top++] = u;
	Onstack[u] = 1;
	for(i = 0; i < SZ(G[u]); i++) {
		v = G[u][i];
		if(Index[v]==-1) {
			tarjan(v);
			Lowlink[u] = min(Lowlink[u], Lowlink[v]);
		}
		else if(Onstack[v]) Lowlink[u] = min(Lowlink[u], Index[v]);
	}
	if(Lowlink[u] == Index[u]) {
		components++;
		do {
			v = Stack[--top];
			Onstack[v] = 0;
			Component[v] = components;
		} while(u != v);
	}
}

void findSCC(int n) {
	components = top = idx = 0;
	SET(Index); CLR(Onstack); MEM(Lowlink, 0x7f);
	for(int i = 1; i <= n; i++) if(Index[i]==-1) tarjan(i);
}

int findWinners(int n) {
	int i, lead, cid;
	CLR(Indeg);
	for(i = 0; i < SZ(edges); i++)
		if(Component[edges[i].ff] != Component[edges[i].ss])
			Indeg[Component[edges[i].ss]]++;
	for(i = 1, lead = cid = 0; i <= components; i++) {
		if(!Indeg[i]) {
			lead++;
			if(lead > 1) return 0;
			cid = i;
		}
	}
	if(lead != 1) return 0;
	for(i = 1, lead = 0; i <= n; i++) if(Component[i]==cid) lead++;
	return lead;
}

int main() {
	int t, n, e, i, j;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(i = 1; i <= n; i++) G[i].clear();
		edges.clear();
		for(i = 1; i <= n; i++) {
			scanf("%d", &e);
			while(e--) {
				scanf("%d", &j);
				G[j].PB(i);
				edges.PB(pii(j, i));
			}
		}
		findSCC(n);
		printf("%d\n", findWinners(n));
	}
	return 0;
}


*/