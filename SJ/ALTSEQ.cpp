// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp




#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;
    vector<ll> v;
void solve()
{
    ll n,t;cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>t;v.push_back(t);
    }
    ll ans=1;

     ll cur=v[0],dp[n+1]={0};dp[0]=1;
    for(ll i=1;i<n;i++)
    {
        dp[i]=1;
        for(ll j=0;j<i;j++)
        {
            if(abs(v[i])>abs(v[j]) && ((v[i]>0 && v[j]<0) || (v[i]<0 && v[j]>0)))
                dp[i]=max(dp[i],dp[j]+1);
        }
    }
    for(ll i=0;i<n;i++)
        ans=max(ans,dp[i]);
    cout<<ans<<"\n";
}


int main()
{ 

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}