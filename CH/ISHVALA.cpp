#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        // ios::sync_with_stdio(0);
        // cin.tie(0);
        long int a[10002],b[10002];
        long int ar,count=0,m,n,s1,s2,x,s,y;
        cin>>m>>n>>x>>y>>s;
        a[0]=0;b[0]=0;
        for(int i=1;i<=x;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=y;i++)
        {
            cin>>b[i];
        }
        x++;y++;
        b[y]=n+1;a[x]=m+1;
        x++;y++;
        // if(s>0)
        {
        if(x || y)
        for(int i=1;i<x;i++)
        {
            for(int j=1;j<y;j++)
                {
                        s1=a[i]-a[i-1]-1;
                        s2=(b[j]-b[j-1]-1);
                        if(min(s1,s2)>=s)count+=(max(s1,s2)/s)*(min(s1,s2)/s);                                            
                }
        }
        cout<<count<<'\n';
        }
    }
}