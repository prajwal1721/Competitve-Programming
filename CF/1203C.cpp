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

ll gcd(ll a ,ll b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
void solve()
{
    ll n,t,ans=0,m=1;cin>>n;
    cin>>t;m=t;
    for(int i=1;i<n;i++)
    {
        cin>>t;
        m=gcd(m,t);
    }
    for(ll i=1;i*i<=m;i++){
        if(m%i==0)
        {
            ans++;
            if(i!=m/i)ans++;
        }
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