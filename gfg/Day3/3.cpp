#include<iostream>
using namespace std;
void solve(){
    int n;cin>>n;
    int v[20][20];   
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cin>>v[i][j];
    }
    int dp[20][20]={0};
    int mx=0;
    for(int i=0;i<n;i++)dp[0][i]=v[0][i];
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            dp[i][j]=dp[i-1][j];
            if(j-1>=0)
                dp[i][j]=max(dp[i][j],dp[i-1][j-1]);
            if(j+1<n)
                dp[i][j]=max(dp[i][j],dp[i-1][j+1]);
            dp[i][j]+=v[i][j];
            if(i==n-1)
                mx=max(mx,dp[i][j]);
        }
    }
    cout<<mx<<"\n";
}
int main(){
    int t;cin>>t;
    while (t-- )
    {
        solve();
    }
    
}