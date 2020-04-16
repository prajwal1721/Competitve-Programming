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
    ll n;cin>>n;
    ll pre=1,cur;
    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
        cin>>cur;
        if(cur)v.push_back(i);
    }
    for(auto i=1;i<v.size();i++)
    {
        if(v[i]-v[i-1]<6)pre=0;
    }
    if(pre)cout<<"YES\n";
    else cout<<"NO\n";
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