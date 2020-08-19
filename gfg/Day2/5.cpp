#include<iostream>
#include<vector>

using namespace std;
int dp[10][50]={0},n,e;
void solve()
{
    cin>>e>>n;
    for(int i=0;i<=n;i++)dp[0][i]=0;
    for(int i=0;i<=e;i++)dp[i][0]=0;
    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=e;i++)
        {
            if(j==1){dp[i][j]=1;continue;}
            if(i==1){dp[i][j]=j;continue;}
            dp[i][j]=INT32_MAX;
            for(int k=1;k<j;k++){
                dp[i][j]=min(dp[i][j],max(dp[i][j-k],dp[i-1][k-1])+1);
            }
        }
    }
    /*
    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=e;i++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }*/
    cout<<dp[e][n]<<"\n";

}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}