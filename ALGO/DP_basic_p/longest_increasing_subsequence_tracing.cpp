#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    ll n,t;cin>>n;
    ll dp[n+1]={0};
    ll trace[n]={0};
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);dp[i]=1;}
    ll ind=0,mx=0;

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(v[i]>v[j]){if(dp[i]<dp[j]+1){dp[i]=dp[j]+1;trace[i]=j;}}
        }
        if(mx<dp[i]){mx=dp[i];ind=i;}
        cout<<dp[i]<<" ";
    }
    cout<<"\n";
    cout<<mx<<"\n";
    while(dp[ind]!=1)
    {
        cout<<v[ind]<<" ";
        ind=trace[ind];
    }
    cout<<v[ind]<<"\n";
}
