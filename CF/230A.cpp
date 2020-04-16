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
    ll n,s;cin>>s>>n;
    vector<pair<ll,ll>> v;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(),[](pair<ll,ll>p1,pair<ll,ll>p2)->bool{
        if(p1.first==p2.first)return p1.second>p2.second;
        else return p1.first<p2.first;
    });

    for(ll i=0;i<n;i++)
    {
        if(s<=v[i].first){cout<<"NO\n";return ;}
        s=s+v[i].second;
    }
    if(s>0)cout<<"YES\n";
    else cout<<"NO\n";
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