// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp




#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;


void solve()
{
    ll n,t,cn;cin>>n;cn=n;
    vector<ll> v;
    while (n--)
    {
        cin>>t;v.push_back(t);
    }
    sort(v.begin(),v.end(),greater<ll>());
    ll d=0,ans=0;
    for(ll i=0;i<cn;i++)
    {
        ans+=max(v[i]-d,(ll)0);
        ans%=mod;
        d++;
    }
    cout<<ans%mod<<"\n";
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