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
    ll n,m;cin>>n>>m;
    ll dp[n][m]={0},val[n][m];
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>val[i][j];
        }
    }      
    for (int i=0;i<n;i++)
    {

        for(int j=0;j<m;j++)
        {
            dp[i][j]=0;
            if(i==0)dp[i][j]=val[i][j];
            else 
            {
            dp[i][j]=dp[i-1][j]+val[i][j];
            if(j>=1)
                dp[i][j]=max(dp[i][j],dp[i-1][j-1]+val[i][j]);
            if(j<m-1)
                dp[i][j]=max(dp[i][j],dp[i-1][j+1]+val[i][j]);
            }
        }
    }
    ll mx=0;
    /*
    cout<<"\n";
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }*/
    for(int i=0;i<m;i++)
    {
        mx=max(mx,dp[n-1][i]);
    }   
    cout<<mx<<"\n";

}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            solve();
        }


    return 0;
}