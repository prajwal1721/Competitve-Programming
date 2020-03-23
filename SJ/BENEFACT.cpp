#include<bits/stdc++.h>
using namespace std;
int mx1=1;
void bfs(int dist[],int s,vector<pair<int,int>>v[],int visited[])
{
    queue<int>q;
    dist[s]=0;
    q.push(s);
    mx1=s;int mxw=dist[s];
    while (!q.empty())
    {
        int t=q.front();q.pop();
        visited[t]=1;
        for(auto i=v[t].begin();i!=v[t].end();i++ )
        {
            int bv,w;
            tie(w,bv)=*i;
            if(!visited[bv]){q.push(bv);dist[bv]=dist[t]+w;}
            if(dist[bv]>mxw){mxw=dist[bv];mx1=bv;}
            visited[bv]=1;
        }
    }
}
int main()
{
    int q;cin>>q;
    while (q--)
    {
        int n;cin>>n;
        map<pair<int,int>,int>mp;
        vector<pair<int,int>>data[n+2];
        int m=n-1;
        int su=0,sv=0,sw=0;
        while (m--)
        {
            int u,v,w;
            cin>>u>>v>>w;
            data[u].push_back({w,v});
            data[v].push_back({w,u});
            if(w>sw){su=u;sv=v;sw=w;}
        }
        int dist[n+2];
        int visited[n+2];
        memset(dist,0,n+2);
        for(int i=0;i<=n;i++)dist[i]=0;
        memset(visited,0,n+2);
        for(int i=0;i<=n;i++){dist[i]=0;visited[i]=0;}
        bfs(dist,1,data,visited);
        int mx=0;  
        for(int i=0;i<=n;i++){dist[i]=0;visited[i]=0;}
        bfs(dist,mx1,data,visited);
        for(int i=1;i<=n;i++){if(mx<dist[i])mx=dist[i];}
        cout<<mx<<"\n";
    }
    
}

/*
1
7
1 2 3
2 3 8 
2 6 2
6 4 6
6 5 5
5 7 8
*/