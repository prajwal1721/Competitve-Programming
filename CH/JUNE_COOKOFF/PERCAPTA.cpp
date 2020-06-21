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
    double mx=0;
    ll t,w,n,m;cin>>n>>m;
    ll visit[n+1]={0};
    vector<pair<double,ll>> adj[n+1];
    vector<ll> pop;
    vector<double> capital_t,capital;
    double data;    
    for(int i=0;i<n;i++)
    {
        cin>>data;
        capital_t.push_back(data);
    }
    for(int i=1;i<=n;i++)
    {
        cin>>t;
        capital.push_back(capital_t[i]/t);
        pop.push_back(t);
        mx=max(mx,capital[i]);
    }
    for(int i=0;i<m;i++)
    {
        ll t1,t2;
        cin>>t1>>t2;
        adj[t1].push_back({capital[t2],t2});
        adj[t2].push_back({capital[t1],t1});
    }
    vector<ll> ans;
    for(ll i=1;i<=n;i++)
    {
        vector<ll> temp;
        if(visit[i])continue;
        if(capital[i]==mx)
        {
            queue<ll> q;
            q.push(i);
            while(!q.empty())
            {
                ll tp=q.front();q.pop();
                if(visit[tp])continue;
                temp.push_back(tp);
                visit[tp]=1;
                for(auto r:adj[tp])
                {
                    if(visit[r.second])continue;
                    if(r.first==mx)
                    {
                        q.push(r.second);
                    }
                }
            }
            if(temp.size()>ans.size())
            {
               ans.clear();
               for(auto o:temp)ans.push_back(o);
            }
        }
    }
    
    cout<<ans.size()<<"\n";
    for(auto i:ans)
        cout<<i<<" ";
    cout<<"\n";
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