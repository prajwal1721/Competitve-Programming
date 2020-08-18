#include<iostream>
#include<string>
using namespace std;
void solve(){
    int n,m;cin>>m>>n;
    string s1,s2;cin>>s2>>s1;
    int dp[n+1][m+1]={0};

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0 ){dp[i][j]=0;continue;}
            dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);
            }
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