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
    ll a,b,w;
    vector<pair<ll,ll>>  data[501];
    ll k;cin>>k;
    for(ll i=0;i<k;i++)
    {
        cin>>a>>b>>w;data[a].push_back({b,w});data[b].push_back({a,w});
    }
    ll st,q;cin>>st>>q;
    priority_queue<pair<ll,ll>> pq;
    ll dist[502];
    for(ll i=0;i<501;i++)dist[i]=INT32_MAX;
    pq.push({0,st});
    dist[st]=0;
    while(!pq.empty())
    {
        ll cur=pq.top().second,d=pq.top().second;pq.pop();
        for(auto it:data[cur])
        {
            if(dist[it.first]>it.second+dist[cur])
            {
                dist[it.first]=it.second+dist[cur];pq.push({-it.second,it.first});
            }
        }
    }
    ll t;
    while(q--)
    {
        cin>>t;if((dist[t]==INT32_MAX))cout<<"NO PATH\n"; 
            else cout<<dist[t]<<"\n";
    }
}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}