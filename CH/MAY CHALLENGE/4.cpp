// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
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
int check(ll mx,ll ans,ll a,ll b)
{

}
void solve()
{
    ll a,b,l,r;cin>>a>>b>>l>>r;
    ll ans=0,no=ceil(log2(r));
    for(int i=no;i>=0;i--)
    {
        if(a&(1<<i)!=0 || b&(1<<i)!=0)
        {
            ans=ans|(1<<i);
        }
        if(ans>r)
        {
            ll mx=0;
            mx=check(mx,ans,a,b);
        }
    }


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