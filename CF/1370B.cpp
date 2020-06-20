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
    ll n,t;cin>>n;
    vector<pair<ll,ll>> o,e;for(int i=0;i<2*n;i++){cin>>t;if(t%2)o.push_back({t,i+1});
            else e.push_back({t,i+1});
        }
    ll cnt=0;
    // n=n/2;
    for(int i=1;i<o.size() && cnt<(n-1);i+=2)
    {
        cout<<o[i-1].second<<" "<<o[i].second<<"\n";
        cnt++;
    }
    for(int i=1;i<e.size() && cnt<(n-1);i+=2)
    {
        cout<<e[i-1].second<<" "<<e[i].second<<"\n";
        cnt++;
    }
}


int main()
{ 
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            solve();
        }


    return 0;
}