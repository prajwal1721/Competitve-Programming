#include<iostream>
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    string s1,s2;cin>>s1>>s2;
    int dp[n+1][m+1]={0};
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0){dp[i][j]=max(i,j);continue;}
            if(s1[i-1]==s2[j-1])dp[i][j]=dp[i-1][j-1];
            else dp[i][j]=1+min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
        }
    }
    cout<<dp[n][m]<<"\n";
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}