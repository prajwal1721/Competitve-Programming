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
    ll n,m;cin>>n>>m;
    if(n<m)swap(n,m);
    if(n==m){cout<<"0\n";return;}
    if(n%m!=0 ||  n%2){cout<<"-1\n";return;}
    n=n/m;
    ll ans=0;
    while(n%8==0){ans++;n/=8;}
    while(n%4==0){ans++;n/=4;}
    while(n%2==0){ans++;n/=2;}
    if(n==1)
    cout<<ans<<"\n";
    else cout<<"-1\n";
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