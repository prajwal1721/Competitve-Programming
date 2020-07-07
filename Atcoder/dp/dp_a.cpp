// link:https://atcoder.jp/contests/dp/tasks/dp_a
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
    vector<ll> v;
    for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    ll ans[n+1]={0};
    for(int i=1;i<=n;i++)ans[i]=INT32_MAX;
    ans[1]=0;
    for(int i=1;i<=n;i++)
    {
        if(i+1<=n)ans[i+1]=min(ans[i+1],abs(v[i]-v[i-1])+ans[i]);
        if(i+2<=n)ans[2+i]=min(ans[i+2],abs(v[i+1]-v[i-1])+ans[i]);
    }
    cout<<ans[n]<<'\n';

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