// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;
void solve()
{
    ll n,k;cin>>n>>k;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        ll s=0,t,p;cin>>t;
        for(ll j=0;j<t;j++)
        {
            cin>>p;s+=p;
        }
        v.push_back(s);
    }
    ll a[n+1][k+1]={0};a[0][0]=0;
    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=k;j++)
        {
            if(i==0 ||k==0 )a[i][j]=0;
            else if(j<v[i-1])a[i][j]=a[i-1][j];
            else a[i][j]=max(a[i-1][j],a[i-1][j-v[i-1]]+v[i-1]);
        }
    }
    cout<<a[n][k]<<"\n";
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