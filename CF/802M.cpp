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
    ll n,k,t;cin>>n>>k;
    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
        cin>>t;v.push_back(t);
    }
    sort(v.begin(),v.end());
    ll s=0;
    for(ll i=0;i<k;i++)
        s+=v[i];
    cout<<s<<"\n";
}


int main()
{ 

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // cout<<t<<"Hi test complete\n";
            solve();


    return 0;
}