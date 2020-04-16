// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp




#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;
ll d1[10000][10000];
ll fact(ll n)
{
    ll cnt=0;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if((n/i)==i)cnt++;
            else cnt+=2;
        }
        cnt%=mod;
    }
    return cnt%mod;
}
void dfs(ll pre,vector<ll> data[],ll visited[],ll s,ll p[],vector<ll> cost)
{
    if(visited[s])return;
    visited[s]=1;
    p[s]=pre*cost[s];
    p[s]%=mod;
    // cout<<s<<" "<<p[s]<<"\n";
    for(auto it=data[s].begin();it!=data[s].end();it++)
    {
        if(s<=*it)
        dfs(p[s],data,visited,*it,p,cost);
    }
}
void solve()
{
    ll n;cin>>n;
    vector<ll> data[n+1];
    for(ll i=0;i<n-1;i++)
    {
        ll u,v;cin>>u>>v;
        data[v].push_back(u);
        data[u].push_back(v);
    }    
    vector<ll> cost;

    cost.push_back(0);
    vector<pair<int,int>>df[n+1];
    for(ll i=0;i<n;i++)
    {
        ll t;cin>>t;cost.push_back(t);
    }
        ll ans[n+1][n+1];
        ll p[n+1];
        for(ll i=1;i<=n;i++)
            {
             ll visited[n+1]={0};memset(visited,0,n+1);
                dfs(1,data,visited,i,p,cost);
                for(ll j=i;j<=n;j++)
                {
                    // cout<<i<<" "<<j<<" "<<p[j]<<"\n";
                    d1[i][j]=d1[j][i]=p[j];
                }
            }

    ll q;cin>>q;
    while (q--)
    {
        ll st,ed;cin>>st>>ed;
           cout<<fact(d1[st][ed])<<"\n";
    }
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