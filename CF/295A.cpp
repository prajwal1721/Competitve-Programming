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
    ll t,n,m,k;cin>>n>>m>>k;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    ll a[n+2]={0};
    vector<tuple<ll,ll,ll>> tp;
    for(int i=0;i<m;i++)
    {
        ll st,ed,inc;cin>>st>>ed>>inc;
        tp.push_back({st,ed,inc});
    }
    ll dp[m+2]={0};
    for(int i=0;i<k;i++)
    {
        ll st,ed;
        cin>>st>>ed;
        dp[st]++;
        dp[ed+1]--;
    }
    ll cur=0;
    dp[0]=0;
    for(int i=1;i<=m;i++)
    {
        cur+=dp[i];
        dp[i]=cur;
    }
    for(int i=1;i<=m;i++)
    {
        ll st,ed,d;
        tie(st,ed,d)=tp[i-1];
        a[st]+=d*dp[i];
        a[ed+1]-=d*dp[i];
    }
    cur=0;
    for(int i=1;i<=n;i++)
    {
        cur+=a[i];
        v[i-1]+=cur;
        cout<<v[i-1]<<" ";
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