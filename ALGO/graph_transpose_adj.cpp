#include<iostream>
#include<vector>
using namespace std;
void printGraph(vector<int> a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i<<"-->";
        for(auto j=a[i].begin();j!=a[i].end();j++)
            cout<<*j<<" ";
            cout<<"\n";
    }
}
void createGraph(vector<int> a[],int u,int v)
{
    a[u].push_back(v);
}
void transpose(vector<int>a[],int n)
{
    vector<int> transpose[n];
    for(int i=0;i<n;i++)
    {
        for(auto j=a[i].begin();j!=a[i].end();j++)
        {
            createGraph(transpose,*j,i);
        }
    }
    printGraph(transpose,n);
}
int main()
{
    int n,m;cin>>n>>m;
    vector<int > a[n+1];
    while (m--)
    {
        int u,v;cin>>u>>v;
        createGraph(a,u,v);
    }
    bool visited[n+1]={0};
    vector<int >ans;
    // for(auto i=ans.begin();i!=ans.end();i++)
        // cout<<*i<<" ";
    transpose(a,n);
    cout<<"\n";
}