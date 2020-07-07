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
    ll n,t,m;cin>>n>>m;
    ll w[n+1],val[n+1];
    for(int i=0;i<n;i++){cin>>w[i]>>val[i];}
    ll dp[m+1]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=m;j>=1;j--)
        {
            if((j-w[i]>0 && dp[j-w[i]]) || j==w[i])dp[j]=max(dp[j],dp[j-w[i]]+val[i]);
        }
        for(int j=1;j<=m;j++)
            dp[j]=max(dp[j],dp[j-1]);
    }
    // for(int j=1;j<=m;j++)
        // cout<<dp[j]<<" ";
    // cout<<"\n";
    cout<<dp[m]<<"\n";


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
