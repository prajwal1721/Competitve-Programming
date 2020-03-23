#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int p=1,n;cin>>n;
    while (n)
    {
        int a[n][n],ans=0,ans2=0;
        for(int i=0;i<n;i++)
            {
                int t=0;
                for(int j=0;j<n;j++)        
                {
                    cin>>a[i][j];ans+=a[i][j];
                }
            }
            int row[n]={0},col[n]{0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                row[j]+=a[j][i];
                col[j]+=a[i][j];
            }
        }
        ans2=0;
        for(int i=0;i<n;i++)
        {
            if(row[i]-col[i]<=0)
            {
                ans2+=-(row[i]-col[i]);
            }
        }
        cout<<p<<". "<<ans<<" "<<ans2<<"\n";p++;        
        cin>>n;
    }
}