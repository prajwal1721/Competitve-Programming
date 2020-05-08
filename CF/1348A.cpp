// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
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
    ll x= n/2;
    ll a=1<<n;
    ll sum=0;
    for(ll i=0;i<x-1;i++)
    {
        sum+=1<<(i+1);
    }
    a+=sum;
    ll b=0;
    for(ll i=x;i<n;i++)
    {
        b+=1<<(i);
    }
    cout<<abs(a-b)<<"\n";
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