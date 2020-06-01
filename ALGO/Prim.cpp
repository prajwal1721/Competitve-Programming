// using adj list and pq
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// for dense graph user adj matrix and for sparse graphs use adj list

/* 
    9 14
   0  1  4 
    0  7  8 
    1  2  8 
    1  7  11 
    2  3  7 
    2  8  2 
    2  5  4 
    3  4  9 
    3  5  14 
    4  5  10 
    5  6  2 
    6  7  1 
    6  8  6 
    7  8  7 

ans== 37
 */
priority_queue<tuple<ll,ll,ll>> pq;
vector<pair<ll,ll>> adj[100];
ll ph(ll t)
{
    for(auto i:adj[t])
        pq.push({-i.first,t,i.second});
}
int main()
{
    ll w,n,t1,t2,m;cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>t1>>t2>>w;
        adj[t2].push_back({w,t1});
        adj[t1].push_back({w,t2});
    }
    // pq.push({w,t1,t2});
    ll visited[n+1]={0};
    set<pair<ll,ll>> s;
    ll wt=0;
    ph(1);
            cout<<"\n"; 
    while(!pq.empty())
    {
        tie(w,t1,t2)=pq.top();pq.pop();
        if(!visited[t1] || !visited[t2])
        {
            if(!visited[t1])
                ph(t1);
            if(!visited[t2])
                ph(t2);
            visited[t1]=visited[t2]=1;
            cout<<t1<<" "<<t2<<" ";
            cout<<-w<<"\n";
            wt+=-w;
            s.insert({t1,t2});
        }
    }
    cout<<wt<<"\n";
    for(auto st:s)
    {
        cout<<st.first<<" "<<st.second<<"\n";
    }
}