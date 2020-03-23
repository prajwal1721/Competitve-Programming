#include<bits/stdc++.h>
using namespace std;
int f=1; 
void dfs(int visited[],int n,int pre,int u,int gen[],vector<int> v[])
{
    visited[u]=1;
    gen[u]=!pre;
    // cout<<u<<"\t\t==";
    // for(auto p=1;p<=n;p++)cout<<gen[p]<<"\t";
    // cout<<"\n";
    for(auto i=v[u].begin();i!=v[u].end();i++)
    {
        if(visited[*i] &&  gen[u]==gen[*i] ){f=0;}
        if(!visited[*i])dfs(visited,n,gen[u],*i,gen,v);
        // cout<<gen[u]<<" "<<gen[*i]<<pre<<"\n";
        
    }
}
int main()
{
    int q,o=1;
    cin>>q;
    while(q--)
    {
        int n,m,eu,ev;
        cin>>n>>m;
        vector<int> v[n+1];
        while(m--)
        {
            cin>>ev>>eu;
            v[eu].push_back(ev);
            v[ev].push_back(eu);
        }
        int gen[n+2]={0};
        int visited[n+2]={0};
        for(int i=0;i<=n;i++){gen[i]=-2;visited[i]=0;}
        cout<<"Scenario #"<<o++<<":\n";
        for(int i=1;i<=n;i++)
            if(!visited[i])dfs(visited,n,1,i,gen,v);
        if(f)
            cout<<"No suspicious bugs found!\n";
        else 
            cout<<"Suspicious bugs found!\n";
            f=1;
    
    }
}