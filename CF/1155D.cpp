// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments: not done dp :
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b))
#define bits(x) __builtin_popcountll(x)
#define vi              vector<int>
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())



typedef long long int ll;
void solve()
{
    ll n,t,m,neg=0;cin>>n>>m;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);if(t<0)neg=1;}
    ll st[n+1]={0},ed[n+1]={0},dp[n+1];
    for(int i=0;i<n;i++){st[i]=ed[i]=i;dp[i]=v[i];}
    if(m<=0 && neg==1)
    {
        for(int i=1;i<n;i++)
        {
            if(v[i]+dp[i-1]<=dp[i])
            {
                dp[i]=dp[i-1]+v[i];
                st[i]=st[i-1];
                ed[i]=i;
            }
        }
        ll s=-1,e=-1,mn=0;
        for(int i=0;i<n;i++)
        {
            if(dp[i]<=mn)
            {
                mn=dp[i];
                s=st[i];e=ed[i];
            }
        }
        cout<<s<<" "<<e<<" "<<mn<<"\n";
        if(mn!=0)
        for(int i=s;i<=e;i++)
            {
                v[i]*=m;
            }
    }
    for(int i=0;i<n;i++)cout<<v[i]<<" ";cout<<"\n";
    for(int i=0;i<n;i++)dp[i]=0;
    ll ans=0;
    dp[0]=v[0];
    for(int i=1;i<n;i++)
    {
        dp[i]=max(dp[i],dp[i-1]+v[i]);
        ans=max(ans,dp[i]);
    }
    if(m>0)ans*=m;
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