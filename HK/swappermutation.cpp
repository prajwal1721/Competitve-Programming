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
    ll i=0,n,k;cin>>n>>k;
    ll dp[n+1]={0};
    dp[0]=1;dp[1]=n-1;
    for(i=2;i<=k;i++){
        dp[i]=dp[i-2]+(n-i)*dp[i-1];
        if(dp[i]<=dp[i-1])break;
    }
    for(;i<=k;i++){
        dp[i]=dp[i-1];
    }
    for(int  i=0;i<=k;i++){cout<<dp[i]<<" ";}cout<<"\n";

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