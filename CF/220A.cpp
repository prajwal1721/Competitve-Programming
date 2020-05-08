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
    ll t,n;cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++){cin>>t;v.push_back(t);}
    vector<ll> cv(v.begin(),v.end());
    sort(v.begin(),v.end());
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
        if(v[i]!=cv[i])cnt++;
        if(cnt>2)break;
    }
    if(cnt>2)cout<<"NO\n";
    else cout<<"YES\n";
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