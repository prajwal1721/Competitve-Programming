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
    ll n,i,k,mx;cin>>n>>k;mx=n;
    i=min(k,(ll)ceil(sqrt(n)));
    // cout<<i<<" ";
    if(n<=k){cout<<1<<"\n";return;}
    for(;i>=1;i--)
    {
        if(n%i==0){
            if(i<=k)mx=min(n/i,mx);
            if((n/i)<=k)mx=min(i,mx);
        }
    }
    // if(i==0){cout<<n<<"\n";return ;}
    // cout<<mx<<" ";
    // if(n/mx<=k){cout<<min(mx,n/mx)<<"\n";return ;}
    cout<<mx<<"\n";

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