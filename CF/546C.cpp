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
    map<tuple<ll,ll,ll,ll>,ll>mp;
    ll n,t;cin>>n;
    ll n1,n2;cin>>n1;
    queue<ll> v1,v2;
    for(ll i=0;i<n1;i++){cin>>t;v1.push(t);}cin>>n2;
    for(ll i=0;i<n2;i++){cin>>t;v2.push(t);}
    ll ans=0;
    n=1000000;
    while(!v1.empty() && !v2.empty() && n!=0)
    {
        n--;
        if(v1.front()>v2.front())
        {
            v1.push(v2.front());
            v1.push(v1.front());
        }
        else{           
            v2.push(v1.front());
            v2.push(v2.front());
        }
        v1.pop();v2.pop();
        ans++;
    }
    if(v1.empty())cout<<ans<<" "<<2<<"\n";
    else if(v2.empty())cout<<ans<<" "<<1<<"\n";
    else cout<<"-1\n";
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