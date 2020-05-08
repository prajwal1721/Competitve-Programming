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
    if(n%4)  { cout<<"NO\n";return ;}
    else
    {
        cout<<"YES\n";
        ll cnt=n/2;
        ll s=0;
        for(ll i=1;i<=cnt;i++)
            {cout<<2*i<<" ";s+=2*i;}
        for(ll i=0;i<cnt-1;i++)
            {cout<<2*i+1<<" ";s=s-(2*i+1);}
        cout<<s<<"\n";
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