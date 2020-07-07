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
vector<ll> dp(1000004,INT32_MAX);
void solve()
{
    ll n,t,m;cin>>n>>m;t=0;
    ll w[n+1],val[n+1];
    dp[0]=0;
    for(int i=0;i<n;i++){cin>>w[i]>>val[i];t+=val[i];}
    // cout<<t<<"\n";   
    for(int i=0;i<n;i++)
    {
        for(int j=t;j>=1;j--)
        {
            if((j-val[i]>0 && dp[j-val[i]]) || j==val[i])
                dp[j]=min(dp[j],dp[j-val[i]]+w[i]);
            // dp[j]=min()
        }
    }
    ll mx=0;
    for(ll i=1;i<=t;i++)if(dp[i]<=m)mx=max(mx,i);
    cout<<mx<<"\n";


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