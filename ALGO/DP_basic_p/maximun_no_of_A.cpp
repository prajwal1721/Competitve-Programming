#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;cin>>n;
    ll cur=0,cp=0;
    ll dp[n+1]={0};
    for(int i=1;i<=n;i++)
    {
        dp[i]=max(dp[i-1]+1,dp[i-1]+cp);
        // cout<<cp<<" ";
        if(i-3>=0 && dp[i]<=2*dp[i-3]){dp[i]=dp[i-3]*2;cp=dp[i-3];}
        // cout<<dp[i]<<"\n";
    }
    cout<<dp[n]<<"\n";
}