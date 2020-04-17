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
ll bfs(vector<ll >data[],ll n)
{
ll dist[n+1],visited[n+1]={0};
queue<ll >q;
visited[1]=1;
q.push(1);
dist[1]=0;
while(!q.empty())
{
    ll cur=q.front();q.pop();
    for(auto it=data[cur].begin();it!=data[cur].end();it++)
    {
        if(!visited[*it]){visited[*it]=1;q.push(*it);dist[*it]=dist[cur]+1;}
    }
}
return dist[n];
}
void solve()
{
    ll n,k,u,v;cin>>n>>k;
    vector<ll> data[n+1];
    for(ll i=0;i<k;i++)   
    {
        cin>>u>>v;
        data[u].push_back(v);
        data[v].push_back(u);
    }   
    cout<<bfs(data,n)<<"\n";
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