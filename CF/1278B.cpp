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
ll dp[1550000]={0};
void call()
{
    ll s=0;
    for(int i=1;i<60000;i++)
    {
        dp[i]=dp[i-1]+i;
    }
}
void solve()
{
    ll c=1,a,b,ans=0;cin>>a>>b;
    for(int i=max(a,b);i<1e12;i++)
    {
        if(binary_search(dp,dp+60000,2*i-a-b)){ans=2*i-a-b;break;}
    }
    // cout<<ans<<"\n";
    cout<<(ll)(-1+sqrt(1+4*2*ans))/(2)<<"\n";
}



int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;cin>>t;
    call();
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            solve();
        }


    return 0;
}