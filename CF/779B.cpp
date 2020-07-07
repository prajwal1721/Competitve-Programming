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
    string s;
    ll n,t,m;cin>>s>>m;
    n=s.length();
    t=0;ll ans=0;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='0')t++;
        else ans++;
        if(t==m)break;
    }
    if(t==m){cout<<ans<<"\n";}
    else if(t)cout<<ans+t-1<<"\n";
    else cout<<n<<"\n";
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