// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:incomplete
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
    ll n,k,t;cin>>n>>k;
    vector<ll> v;v.push_back(0);
    for(int i=0;i<n;i++){cin>>t;v.push_back(t+v[i]);}
    ll pos[n+5]={0};
    for(int i=0;i<k;i++)pos[i]=0;
    for(int i=k;i<=n;i++)
    {
        pos[i]=v[i]-v[i-k];
    }
    for(int i=0;i<=n;i++)
        cout<<pos[i]<<" ";cout<<"\n"; 
    ll mx1=0,mx2=-1;
    for(int i=0;i<n;i++)
    {

    }
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