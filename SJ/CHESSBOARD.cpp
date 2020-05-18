// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
    write the code in c else it will give compilation error
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
    ll n;cin>>n;
    ll dp[n+1][n+1]={0},val[n][n]={0};
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)
        if(i%2==j%2)cin>>val[i][j];
        else {cin>>val[i][j];val[i][j]*=-1;}

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {

            if(j==1)dp[i][j]=val[i-1][j-1];
            else dp[i][j]=dp[i][j-1]+val[i-1][j-1];

        }
        // cout<<"\n";
    }

    // cout<<"done\n";
    ll q,s1,s2,e1,e2;cin>>q;
    for(int  i=0;i<q;i++)
    {
        ll ans=0;
        cin>>s1>>s2>>e1>>e2;
        for(int j=s1;j<=e1;j++)
        {
            ans+=dp[j][e2]-dp[j][s2-1];
            // cout<<ans<<" ";
        }
        cout<<abs(ans)<<"\n";
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