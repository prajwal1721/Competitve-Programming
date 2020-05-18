// source code need to be minimized 256B 
#include<iostream>
using namespace std;int main(){ int  t;cin>>t;while(t--){int dp[100][100],mx=0,t,n;cin>>n>>t;dp[0][0]=t;for(int i=1;i<n;i++)for(int j=0;j<=i;j++){cin>>t;dp[i][j]=dp[i-1][j];if(j-1>=0)dp[i][j]=max(dp[i][j],dp[i-1][j-1]);dp[i][j]+=t;mx=max(mx,dp[i][j]);}cout<<mx<<"\n";}}