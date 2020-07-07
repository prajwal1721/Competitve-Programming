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
    ll n,t,m;cin>>n;
    ll a[6]={0},b[6]={0};
    for(int i=0;i<n;i++){cin>>t;a[t]++;}
    for(int i=0;i<n;i++){cin>>t;b[t]++;}
    ll ans=0;
    for(int i=0;i<=5;i++){
        if((a[i]+b[i])%2){cout<<"-1\n";return ;}
        ans+=(max(a[i],b[i])-min(a[i],b[i]))/2;
    }
    cout<<ans/2<<"\n";
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