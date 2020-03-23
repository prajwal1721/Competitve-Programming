#include<bits/stdc++.h>
using namespace std;
void ford_warshall(int dist[],int *a,int n,int source)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                *((a+i*n)+j)=min(*((a+j*n)+k)+*((a+k*n)+j),*((a+i*n)+j));
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        dist[i]=min(*(a+i*n)+source,*((a+source*n)+i));
    }

}
int main()
{
    int n,m;cin>>n>>m;
    int a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                a[i][j]=500000;
        }
    while (m--)
    {
        int u,v,w;
        cin>>u>>v>>w;
        a[u][v]=w;a[v][u]=w;
    }

        int dist[n];
        memset(dist,500000,n);
        ford_warshall(dist,(int*)a,n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<"\n";
        }
        for(int i=0;i<n;i++)
            cout<<i<<"::"<<dist[i]<<"\n";
}

