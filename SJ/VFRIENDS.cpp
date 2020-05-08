// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
    not solved WA wrong approach
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
    ll n,t;cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
        cin>>t;v.push_back(t);
    }
    sort(v.begin(),v.end());
    ll l=n-1;
    for(ll i=0;i<l;)
    {
        if(v[l] && v[i]){
            ll m=min(v[i],v[l]);
            v[i]-=m;v[l]-=m;
        }
        if(v[i]==0)i++;
        if(v[l]==0)l--;
    }
    ll f=0;
    for(ll i=0;i<n;i++)if(v[i]!=0){f=1;break;}
    if(f==0)cout<<"HAPPY\n";
    else cout<<"SAD\n";

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