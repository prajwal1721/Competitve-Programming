// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:
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
    ll n;cin>>n;
    ll a[100][100]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    ll ans=1;
    ll dp[100][100]={0};
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dp[i][j]=INT32_MAX;
            if(i-1>=0)
                dp[i][j]=min(dp[i][j],dp[i-1][j]);
            if(j-1>=0)
                dp[i][j]=min(dp[i][j],dp[i][j-1]);
            if(j-1>=0 && i-1>=0)
                dp[i][j]=min(dp[i][j],dp[i-1][j-1]);
        
            if(a[i-1][j-1])
            {
                dp[i][j]++;
                ans=max(ans,dp[i][j]);
            }
        }
    }
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