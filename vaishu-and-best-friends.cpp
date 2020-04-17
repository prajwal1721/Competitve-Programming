// link:https://www.hackerearth.com/problem/algorithm/vaishu-and-best-friends/editorial/
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
read the editorial for this 
ans is wrong 
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;
void solve()
{
    ll n;cin>>n;
    ll ans=1;
    for(ll i=0;i<n-1;i++)
    {
        ans*=2;ans%mod;
    }
    cout<<ans+1<<"\n";
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