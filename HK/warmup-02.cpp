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
ll dp[1000005]={0};
void solve()
{
    ll n;cin>>n;
    dp[0]=1;
    for(int j=0;j<=31;j++)
    {for(int i=1;i<=n;i++)
    {
        if(i-(1<<j)>=0)dp[i]+=(dp[i-(1<<j)]);
        dp[i]%=mod;
    }
    // for(int i=0;i<=n;i++)cout<<dp[i]<<" ";cout<<"\n";
    }
    dp[0]=0;
    cout<<dp[n]<<"\n";

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