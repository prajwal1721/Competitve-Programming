// link:https://atcoder.jp/contests/dp/tasks/dp_i
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments: good one didn't get watch YT errichto 
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
    ll n,t,m;cin>>n;
    double f;
    double dp[n+2]={0};
    dp[0]=1;
    for(int ii=0;ii<n;ii++){cin>>f;
        for (int i=ii+1;i>=0;i--)
        {
            dp[i]=(i==0?0:dp[i-1]*f)+(1-f)*(dp[i]);
        }
    }
    double ans=0;
    for(int i=0;i<=n;i++)
    {
        t=n-i;
        // cout<<dp[i]<<" ";
        if(i>t)ans+=dp[i];
    }
    printf("%0.10lf\n",ans);
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