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
    vector<pair<ll,ll>> mp;
    map<ll,ll> mp1;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);mp1[v[i]%k]=0;}
    for(int i=0;i<n;i++)
        if(v[i]%k!=0)
            mp1[k-v[i]%k]++;
    ll ans=0,cur=0,p=0;
    for(auto i:mp1)
    {
        if(i.first!=0)
        mp.push_back({i.first,i.second});
    }
    for(auto i:mp)
    {
        ans=max(i.first+k*(i.second-1),ans);
        // cout<<i.first<<":"<<i.first+k*(i.second-1)<<"\n";
    }
    if(ans!=0)ans++;
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