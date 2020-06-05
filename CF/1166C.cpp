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

#define mz 1000000000

typedef long long int ll;
vector<ll> v;
ll check(ll a,ll b)
{
    ll mn=min(min(abs(a+b),abs(a-b)),min(abs(b-a),abs(b+a))),mx=max(max(abs(a+b),abs(a-b)),max(abs(b-a),abs(b+a)));
    // cout<<a<<" "<<b<<" "<<mx<<" "<<mn<<"\n";
    if(mn<=min(abs(a),abs(b)) && mx>=max(abs(a),abs(b)))return 1;
    return 0;
}
ll bs(ll s, ll e ,ll no)
{
    ll a=0,sz=e+1;
    while (s<=e)
    {
        ll m=(s+e)/2;
        if(check(v[m],no))
        {
            e=m;
            a=max(a,sz-m);
        }
        else 
        {
            s=m+1;
        }
        if(s==e)break;
    }
    return max(a,0LL);
}
void solve()
{
    ll t,ans=0,n;cin>>n;    
    for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        ans+=bs(i+1,n-1,v[i]);
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