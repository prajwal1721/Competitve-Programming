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
    ll n,m,t;cin>>n>>m;
    vector<ll>v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    ll dp[100]={0};
    for(int i=1;i<=m;i++)
    {
        dp[i]=INT32_MAX;
        for(int j=0;j<n;j++)
        {
            if(i-v[j]>=0)dp[i]=min(dp[i],dp[i-v[j]]+1);
        }
    }    
    cout<<dp[m]<<"\n";
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