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
    ll dp[102]={0},ans=0;
    for(int i=0;i<n;i++){cin>>t;dp[t]++;}
    for(int i=1;i<=100;i++){
        t=0;
        for(int j=1;j<i-j;j++){
            t+=min(dp[i-j],dp[j]);
        }
        if(i%2==0)t+=dp[i/2]/2;
        ans=max(t,ans);
    }
    cout<<ans<<"\n";


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