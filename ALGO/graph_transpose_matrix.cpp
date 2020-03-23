#include<iostream>
#include<vector>
#define SWAP(x,y,t) t=x,x=y,y=t
using namespace std;
void printGraph(int**a ,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i<<"-->";
        for(int  j=0;j<n;j++)
            if(a[i][j])cout<<j<<" ";
        cout<<"\n";
    }
}
void createGraph(int **a,int u,int v)
{
    a[u][v]=1;
}
void transpose(int **a,int n)
{
    int t;
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
            SWAP(a[i][j],a[j][i],t);
}
int main()
{
    int n,m;cin>>n>>m;
    int **a;
    a=(int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
    {
        a[i]=(int*)malloc(sizeof(int)*n);
    }
    while (m--)
    {
        int u,v;cin>>u>>v;
        createGraph(a,u,v);
    }
    printGraph(a,n);
    transpose(a,n);
    cout<<"\n";
    printGraph(a,n);
}