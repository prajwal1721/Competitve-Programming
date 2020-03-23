// https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/practice-problems/algorithm/monk-learning-graph-3/
#include<bits/stdc++.h>
using namespace std;
int ans(vector<pair<int,int>>s[],int n,int k)
{
    auto it=s[n].size();k--;
    if(it>k)return s[n][k].second;
    else return -1;
}
void createGraph(vector<pair<int,int>>s[],int u,int v,int v_u,int v_v)
{
    s[u].push_back({v_v,v});
    s[v].push_back({v_u,u});
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n,cn,m,k;cin>>n>>m>>k;cn=n;
    int val[n+2];int i=1;
    while (cn--)
    {
        cin>>val[i++];
    }
    int u,v;
    vector<pair<int,int>>s[n+2];
    while (m--)
    {
        cin>>u>>v;
        createGraph(s,u,v,val[u],val[v]);
    }
    for(i=1;i<=n;i++)
    {
        sort(s[i].begin(),s[i].end(),greater<pair<int,int>>());
        cout<<ans(s,i,k)<<"\n";
    }   
}