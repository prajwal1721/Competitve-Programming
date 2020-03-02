#include<iostream>
#include<vector>
using namespace std;
vector<int> DFS(vector<int> a[],bool visited[],int n,vector<int >ans)
{
    if(!visited[n])
    {
        ans.push_back(n);
        visited[n]=true;
        for(auto i=a[n].begin();i!=a[n].end();i++)
            ans= DFS(a,visited,*i,ans);
    }
    return ans;
}
void create(int u,int v,vector<int> a[])
{
    a[u].push_back(v);
    a[v].push_back(u);
}
int main()
{
    int n,m;cin>>n>>m;
    vector<int > a[n+1];
    while (m--)
    {
        int u,v;cin>>u>>v;
        create(u,v,a);
    }
    bool visited[n+1]={0};
    vector<int >ans;
    ans=DFS(a,visited,1,ans);
    for(auto i=ans.begin();i!=ans.end();i++)
        cout<<*i<<" ";
    cout<<"\n";
}
