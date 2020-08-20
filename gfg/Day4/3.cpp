#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;cin>>s;
    string t(s.rbegin(),s.rend());
    int n=s.length();
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++)
    {       
        for(int j=0;j<=n;j++)
        {
            dp[i][j]=0;
            if(i==0 || j==0){continue;}
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            if(s[i-1]==t[j-1])
                dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);
        }
    }
    cout<<n-dp[n][n]<<"\n";
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}