#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void bfs(vector<int> a[],int n,int *ans)
{
    int visited[n+1]={0},v_count=0;
    for(int i=0;i<n && v_count<n;i++)
    {
        if(visited[i])continue;
        (*ans)++;
        queue<int>q;
        q.push(i);visited[i]=1;
        while (!q.empty())
        {
            int s=q.front();q.pop();
            for(auto j:a[s])
            {
                if(!visited[j])
                {
                    visited[j]=1;q.push(j);v_count++;
                }
            }
        }
        
    }
}
int main()
{
    ll n,m,u,v;cin>>n>>m;
    vector<int> a[n+1];
    while (m--)
    {
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    int ans=0;
    bfs(a,n,&ans);
    cout<<ans-1<<"\n";
}