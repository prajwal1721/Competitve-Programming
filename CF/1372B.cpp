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
    ll n,mn=-1;cin>>n;
    for(ll i=2;i*i<n;i++)
    {
        if(n%i==0)
        mn=max(mn,max(i,n/i));
    }
    if(sqrt(n)==ceil(sqrt(n))){cout<<sqrt(n)<<" "<<n-sqrt(n)<<"\n";return ;}
    ll mx=0;
    // cout<<mn<<" ";
    if(mn==-1){cout<<1<<" "<<n-1<<"\n";return;}
    ll p=n/mn;
    for(ll i=1;i<p;i++)
    {
        mx=max(mx,(ll)gcd(i,p-i));
    }
    cout<<mx*mn<<" "<<(n-mx*mn)<<"\n";
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