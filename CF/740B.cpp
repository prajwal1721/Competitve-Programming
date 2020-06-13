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
    ll t,n,m;cin>>n>>m;
    ll ans=0;
    vector<ll> v;v.push_back(0);
    for(int i=0;i<n;i++){cin>>t;v.push_back(t+v[i]);}
    for(int i=0;i<m;i++)
    {
        ll l,r;cin>>l>>r;
        if(v[r]-v[l-1]>0)ans+=v[r]-v[l-1];
    }
    cout<<ans<<"\n";

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