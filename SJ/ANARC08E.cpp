// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
    with dp 
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
    ll a,b;
    cin>>a>>b;
    while(a!=-1)
    {
        
        int dp[1000][1000]={0};
        dp[0][0]=1;
        for(int i=1;i<=a;i++)
                dp[i][0]=1;
        for(int j=1;j<=b;j++)
                dp[0][j]=1;
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=b;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        if((a+b)==dp[a][b])
            cout<<a<<"+"<<b<<"="<<a+b<<"\n";
        else 
            cout<<a<<"+"<<b<<"!="<<a+b<<"\n";
        cin>>a>>b;
    }
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