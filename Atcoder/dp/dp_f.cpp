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
    string s,t;cin>>s>>t;
    ll n=s.length(),m=t.length();
    ll dp[m+2][n+2]={0};
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0 ){dp[i][j]=0;continue;}
            dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            if(t[i-1]==s[j-1])dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);
            // cout<<dp[i][j]<<" ";
        }
        // cout<<"\n";
    }
    string ans="";
    ll i=m,j=n;
    while(i && j)
    {
        if(t[i-1]==s[j-1]){ans=s[j-1]+ans;i--;j--;}
        else if(dp[i-1][j]>dp[i][j-1])i--;
        else j--;
    }
    cout<<ans<<"\n";
    // cout<<dp[m][n]<<"\n";

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