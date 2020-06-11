// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:not done yet
*/



#include<bits/stdc++.h>
using namespace std; 
#define ma 1000000000
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b))
#define bits(x) __builtin_popcountll(x)
#define vi              vector<int>
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())
#define a(x) abs(x)


typedef long long int ll;
vector<ll> v;
ll n,t;
ll check(ll x,ll y)
{
    return (max(a(x+y),a(x-y))>=max(a(x),a(y))&& min(a(x+y),a(x-y))<=min(a(x),a(y)));
}
ll bs(ll s,ll e)
{
    ll f=n,t=(v[s-1]);

    while(s<=e)
    {
        ll m=(s+e)/2;
        if(check(t,v[m]))
            {e=m-1;f=max(f,m);}
        else 
            s=m+1;
    }

}
void solve()
{
    cin>>n;
    ll ans=0;
    for(int i=0;i<n;i++){cin>>t;v.push_back(t+ma);}
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        // cout<<i<<" "<<bs(i,n-1)<<" ";
        ans+=max(n-bs(i+1,n-1)-1,0LL);
        // cout<<ans<<"\n";
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