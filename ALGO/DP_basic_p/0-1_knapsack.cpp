#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll s,n,t;cin>>n>>s;
    vector<ll> price,weight;
    for(int i=0;i<n;i++){cin>>t;weight.push_back(t);}
    for(int i=0;i<n;i++){cin>>t;price.push_back(t);}
    ll dp[s+1]={0};
    for(int j=0;j<n;j++)
    {
        for(int i=s;i>=1;i--)
        {
            if(i-weight[j]>0 && dp[i-weight[j]]!=0 || i==weight[j])dp[i]=max(dp[i],dp[i-weight[j]]+price[j]);
            else dp[i]=max(dp[i],dp[i-1]);
        }
    }
    // for(int i=1;i<=s;i++)cout<<dp[i]<<" ";
    cout<<"\n";
    cout<<dp[s]<<"\n";
}   
