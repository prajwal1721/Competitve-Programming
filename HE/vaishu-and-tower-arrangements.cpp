// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;
void solve()
{
    ll n,t;cin>>n;
    ll dp[n+1]={0};dp[0]=0;
    ll dp1[n+2]={0};
    vector<ll> v;
    for(ll i=1;i<=n;i++)
    {
        cin>>t;v.push_back(t);
        if(t==1)dp[i]=dp[i-1]+1;
        else dp[i]=dp[i-1];
    }
    dp[n+1]=0;
    for(ll i=n;i>=1;i--)
    {
        dp1[i]=dp1[i+1];
        if(v[i-1]==-1)dp1[i]++;
    }
    ll mn=INT32_MAX;
    for(ll i=1;i<n;i++)
    {
        // cout<<dp[i]<<" "<<dp1[i+1]<<"\n";
        mn=min(mn,dp[i]+dp1[i+1]);
    }
    // if(v[0]!=-1)mn++;
    // if(v[n-1]!=1)mn++;
    cout<<mn<<"\n";

}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            solve();
        }


    return 0;
}