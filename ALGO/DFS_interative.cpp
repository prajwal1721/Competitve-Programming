#include<iostream>
#include<vector>
using namespace std;
vector<int> DFS(vector<int> a[],int n,int nodes,vector<int >ans)
{
    bool visited[nodes+1];
    vector<int >stk;
    stk.push_back(n);
    while (!stk.empty())
    {
        n=*(stk.end()-1);
        stk.pop_back();
        if(!visited[n])
        {
            visited[n]=true;
            ans.push_back(n);   
            for(auto i=a[n].begin();i!=a[n].end();i++)
            {
                stk.push_back(*i);
            }
        }
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
    ans=DFS(a,1,n,ans);
    for(auto i=ans.begin();i!=ans.end();i++)
        cout<<*i<<" ";
    cout<<"\n";
}
