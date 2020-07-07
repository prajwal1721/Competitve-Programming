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
    ll n,t,m;cin>>n;
    ll a[n][3];
    for(int i=0;i<n;i++){cin>>a[i][0]>>a[i][1]>>a[i][2];}
    ll dp[n][3]={0};
    dp[0][0]=a[0][0];dp[0][1]=a[0][1];dp[0][2]=a[0][2];
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j==0)
                dp[i][j]=max(dp[i][j],a[i][j]+max(dp[i-1][2],dp[i-1][1]));
            if(j==1)
                dp[i][j]=max(dp[i][j],a[i][j]+max(dp[i-1][0],dp[i-1][2]));
            if(j==2)
                dp[i][j]=max(dp[i][j],a[i][j]+max(dp[i-1][0],dp[i-1][1]));
        }
    }
    cout<<max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]))<<"\n";

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