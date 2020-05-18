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
void solve()
{
    ll n,a[3];cin>>n>>a[0]>>a[1]>>a[2];
    ll dp[n+1]={0};
    for(int i=1;i<=n;i++)
    {
        dp[i]=0;
        for(int j=0;j<3;j++)
        {
            if(i-a[j]>=0 && dp[i-a[j]]>0 || i==a[j])
                {dp[i]=max(dp[i-a[j]]+1,dp[i]);}
                // cout<<i<<" "<<a[j]<<"iin:"<<i<<"\n";}
        }
        // cout<<"\n";
    }   
    // for(int i=1;i<=n;i++)cout<<dp[i]<<" ";cout<<"\n";
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