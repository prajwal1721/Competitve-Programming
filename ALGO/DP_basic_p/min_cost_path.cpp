#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;cin>>n>>m;
    ll a[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    ll dp[n][m]={0};
        cout<<"\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            dp[i][j]=INT32_MAX;
            if(i==0 && j==0)dp[i][j]=a[i][j];
            if(i-1>=0)
            dp[i][j]=min(dp[i][j],dp[i-1][j]+a[i][j]);
            if(j-1>=0)
            dp[i][j]=min(dp[i][j],dp[i][j-1]+a[i][j]);
            if(j-1>=0 && i-1>=0)
            dp[i][j]=min(dp[i][j],dp[i-1][j-1]+a[i][j]);
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<dp[n-1][m-1]<<"\n";
}

/**
 *
  4 3 
3 2 8 
1 9  7
0 5 2 
6 4 3
 

  ans=11;
  can move diagonally
  
 * 
 */