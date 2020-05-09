// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
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
ll dp[2001][2001]={0};
void solve()
{
    ll n,m;cin>>n>>m;
    int cost[26];
    for(ll i=0;i<26;i++)cin>>cost[i];
    string s1,s2;cin>>s1>>s2;
    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=m;j++)
        {
            if(i==0 || j==0) dp[i][j]=0;
            else if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=cost[s1[i-1]-'a']+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<dp[n][m]<<"\n";
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