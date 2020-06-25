#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,t,s;cin>>n>>s;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    ll dp[s+1]={0};
    sort(v.begin(),v.end());
    for(int j=0;j<n;j++)
    {
        dp[j]=1;
        for(int i=s;i>=0;i--)
        {
            if(i-v[j]>0 && dp[i-v[j]]==1)dp[i]=1;
        }
    }
    cout<<dp[s]<<"\n";
}