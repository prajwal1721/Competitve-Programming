//partially correct
#include<bits/stdc++.h>
using  namespace std; 
int c;
int f;
void dfs(int src,vector<int>data[],int visited[],int v)
{
    visited[src]=1;
    for(auto it=data[src].begin();it!=data[src].end();it++)
    {
        if(!visited[*it] && *it!=v)
        {
            if(*it==c){f=1;return;}
            {dfs(*it,data,visited,0);}
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;cin>>n>>m;
    vector<int> data[n+1];
    int id=1;
    map<int,pair<int,int>>mp;  
    while (m--)
    {
        int u,v;cin>>u>>v;
        data[u].push_back(v);
        data[v].push_back(u);
        if(u>v){int te=u;u=v;v=te;}
        mp[id]={u,v};id++;
    }
    int q;cin>>q;
    while (q--)
    {int p;
        cin>>p;
        int visited[n+1]={0};
        int u,v;
        tie(u,v)=(mp[p]);
        c=u;f=0;
        dfs(v,data,visited,u);
        // c=u;
        // if(!f)
        // dfs(v,data,visited,u);
        if(f)cout<<"Happy\n";
        else cout<<"Unhappy\n";
    }
    
    
}