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
    ll n,t,t1,m,k;
    cin>>n>>m>>k;
    vector<ll> v;
    v.push_back(0);
    ll dp[k+1][n+2];
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++)dp[i][j]=0;
    }
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t+v[i]);
    }

// knapsack 
    for(int i=m;i<=n;i++){
        dp[0][i]=max(v[i]-v[i-m],dp[0][i-1]);
    }
    
    for(int i=1;i<k;i++){
        for(int j=m;j<=n;j++){
                dp[i][j]=max(dp[i-1][j-m]+v[j]-v[j-m],dp[i][j-1]);
        }
    }
    // for(int i=0;i<=k;i++){
    //     for(int j=0;j<=n;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    cout<<dp[k-1][n]<<"\n";
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