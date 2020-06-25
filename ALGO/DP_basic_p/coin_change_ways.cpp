#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,s,t;cin>>n>>s;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    ll dp[s+1]={0};
    dp[0]=1;
    for(int j=0;j<n;j++)
    {
        for(int i=1;i<=s;i++)
        {
            if(i-v[j]>=0)dp[i]+=dp[i-v[j]];
        }
    }
    cout<<dp[s]<<"\n";
}