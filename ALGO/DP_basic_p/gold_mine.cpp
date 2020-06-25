#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;cin>>n>>m;
    ll a[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[j][i];
    ll dp[n][m]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0){dp[i][j]=a[i][j];continue;}
            dp[i][j]=dp[i-1][j];
            if(j-1>=0)dp[i][j]=max(dp[i][j],dp[i-1][j-1]);
            if(j+1<m)dp[i][j]=max(dp[i][j],dp[i-1][j+1]);
            dp[i][j]+=a[i][j];
            // cout<<dp[i][j]<<"\t";
        }
        // cout<<"\n";
    }
    ll ans=0,x=n-1,y;
    cout<<"\n";
    for(int i=0;i<m;i++)
        if(ans<dp[n-1][i]){ans=dp[n-1][i];y=i;}
    cout<<x<<" "<<y<<"::"<<dp[x][y]<<"\n";
    for(int i=n-2;i>=0;i--)
    {
        ll t=y;
        if(y-1>=0 && dp[i][t]<dp[i][y-1])t=y-1;
        if(y+1>=0 && dp[i][t]<dp[i][y+1])t=y+1;
        y=t;
        cout<<i<<" "<<y<<"::"<<dp[i][y]<<"\n";
    }
    cout<<ans<<"\n";
}
