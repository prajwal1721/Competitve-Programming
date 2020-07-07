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
    ll a[n][m]={0};
    char c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>c;
            if(c=='.')a[i][j]=1;
            else a[i][j]=0;
        }
    }
    ll dp[n][m]={0};
    dp[0][0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==0)continue;
            if(i==0 && j==0 )continue;
            dp[i][j]=0;
            if(i-1>=0 && a[i-1][j])dp[i][j]+=dp[i-1][j];
            if(j-1>=0 && a[i][j-1])dp[i][j]+=dp[i][j-1];
            dp[i][j]%=mod;
        }
    }
    /*
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
               cout<<dp[i][j]<<" ";
        cout<<"\n";
        }
        */
    cout<<dp[n-1][m-1]<<"\n";

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