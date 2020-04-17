// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;
void solve()
{
    ll n,k,st,ed;
    cin>>n>>k>>st>>ed;
    vector<pair<ll,ll>> data[n+1];
    ll u,v,w;
    for(ll i=0;i<k;i++){cin>>u>>v>>w;data[v].push_back({u,w});data[u].push_back({v,w});}
    ll visited[n+1]={0};
    ll dist[n+1];
    visited[st]=1;
    for(ll i=1;i<=n;i++)
    {
        dist[i]=INT32_MAX;
    }
    priority_queue<pair<ll,ll>> pq;
    pq.push({0,st});
    dist[st]=0;
    while(!pq.empty())
    {
        ll cur=pq.top().second,d=pq.top().first;pq.pop();
        for(auto it=data[cur].begin();it!=data[cur].end();it++)
        {

            if(dist[(*it).first]>dist[cur]+(*it).second)
            {
                dist[(*it).first]=(*it).second+dist[cur];pq.push({-(*it).second,(*it).first});
            }
        }
    }
    // for(ll i=1;i<=n;i++)cout<<dist[i]<<" ";cout<<"\n";
    if(dist[ed]==INT32_MAX)cout<<"NONE\n";
    else cout<<dist[ed]<<"\n";
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