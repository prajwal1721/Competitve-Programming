#include<bits/stdc++.h>
using  namespace std; 
typedef long long ll;
ll dp[1000000]={0};
ll fib(ll n)
{
    if(dp[n]!=0)return dp[n];
    ll f=1;
    if(n>=2)f=fib(n-1)+fib(n-2); 
    dp[n]=f;
    return f;
}
int main()
{
    ll n;cin>>n;
    // recursive
    // cout<<fib(n)<<"\n";

    // iterative
    dp[0]=dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n]<<"\n";
}
