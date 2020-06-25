#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    ll n,t;cin>>n;
    ll dp[n+1]={0};
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);dp[i]=1;}
    ll mx=0;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(v[i]>v[j])dp[i]=max(dp[j]+1,dp[i]);
        }
        mx=max(dp[i],mx);
        cout<<dp[i]<<" ";
    }
    cout<<"\n";
    cout<<mx<<"\n";
}
