#include<bits/stdc++.h>
using namespace std;
void bellman(int source,int dist[],vector<tuple<int,int,int>>t,int n)
{
    dist[source]=0;
    int u,v,w;
    for(int i=0;i<n;i++)
    {
        for(auto e:t)
        {
            tie(u,v,w)=e;
            dist[v]=min(dist[u]+w,dist[v]);
        }
    }
}
int main()
{
    int n,m;cin>>n>>m;
    vector<tuple<int,int,int>> t;
    int cn=n,cm=m;
    while (cm--)
    {
        int u,v,w;cin>>u>>v>>w;
        t.push_back(tie(u,v,w));
    }
    int dist[n];
    memset(dist,INFINITY,n);
    bellman(0,dist,t,n);
    for(auto i=0;i<n;i++)
        cout<<i<<"::"<<dist[i]<<"\n";
}