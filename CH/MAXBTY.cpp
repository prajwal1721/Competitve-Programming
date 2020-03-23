//incomplete

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;cin>>q;
    while (q--)
    {
        int n,qr;cin>>n>>qr;
        int a[n];
        int mx=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];if(mx<a[i])mx=a[i];
        }
        int cumu[n];cumu[0]=0;
        for(int i=0;i<n;i++)
        {
            cumu[i+1]=a[i]+cumu[i];
        }
        while (qr--)
        {
            char ch;int l,r;cin>>ch>>l>>r;
            if(ch=='Q')
            {
                bool next=true;
                int x=l-1,y=r,ans=cumu[y]-cumu[x];
                while (next && x>=0 && y<=n )
                {
                    if(x>=1 &&ans<cumu[y]-cumu[x-1]){ans=cumu[y]-cumu[x-1];next=true;}
                    if(y<n-1 &&ans<cumu[y+1]-cumu[x]){ans=cumu[y+1]-cumu[x];next=true;}
                    if(x>=1 && y<n-1 &&ans<cumu[y+1]-cumu[x-1]){ans=cumu[y+1]-cumu[x-1];next=true;}
                    x--;y++;
                }
                cout<<ans<<"\n";
            }
            else
            {
                
                int dif=r-a[l-1];a[l-1]=r;
                for(int i=l;i<=n;i++)
                {
                    cumu[i]+=dif;
                }
            }
        }
        
    }
    
}