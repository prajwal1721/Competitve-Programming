// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:Parital 
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
ll dp[100001]={0};
ll ans=0;
ll check(ll a,ll b)
{
    ll c=0;
    for(int i=0;i<=14;i++)
    {
        if((a&(1<<i))!=(b&(1<<i)))c++;
    }
    return c;
}
void solve()
{
    ll n,t,m;cin>>n>>m;
    ans=0;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;
        if(dp[t]==0)
            v.push_back(t);
        dp[t]++;
    }
    if(!m){
        for(int i=0;i<v.size();i++){ans+=max(0ll,(dp[v[i]]*(dp[v[i]]-1))/2);}
        cout<<ans<<"\n";return ;
    }
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(check(v[i],v[j])==m)ans+=(dp[v[i]]*dp[v[j]]);
        }
    }
    cout<<ans<<"\n";

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