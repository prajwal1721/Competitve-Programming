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
    ll dp[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>dp[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {

            if(i==0 && j==0 || j==m-1 && i==n-1 || j==0 && i==n-1 || i==0 && j==m-1)
            {
                if(dp[i][j]>2){cout<<"NO\n";return ;}
                dp[i][j]=2;
            }
            else if(i==0 || j==0 || i==n-1 || j==m-1)
            {
                if(dp[i][j]>3){cout<<"NO\n";return ;}
                dp[i][j]=3;
            }
            else 
            {
                if(dp[i][j]>4){cout<<"NO\n";return ;}
                dp[i][j]=4;
            }
        }
    }
    cout<<"YES\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }

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