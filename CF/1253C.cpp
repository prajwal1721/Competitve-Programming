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
    ll n,t,k;cin>>n>>k;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    vector<ll > ps;ps.push_back(0);
    sort(v.begin(),v.end());
    ll s=0;
    for(int i=0;i<n;i++)
    {
        ps.push_back(v[i]+ps[i]);
    }
    ll dp[n+1]={0};
    // dp[1]=ps[1];
    for(int i=1;i<=n;i++)
    {
        dp[i]=ps[i]+dp[max(i-k,0LL)];
        cout<<dp[i]<<" ";
    }
    cout<<"\n";
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