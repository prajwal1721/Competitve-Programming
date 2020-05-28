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



typedef long int ll;
void solve()
{
    ll t,n,x,c=1;cin>>n>>x;
    vector<ll> d;
    for(int i=0;i<n;i++)
    {cin>>t;d.push_back(t);}
    vector<ll> v;v.push_back(0);
    // for(ll k=0;k<2;k++)
    for(int i=0;i<n;i++)
    {for(int j=1;j<=d[i];j++){v.push_back(j+v[c-1]);c++;}}
    // for(int i=0;i<n;i++)
    // {for(int j=1;j<=d[i];j++){v.push_back(j+v[c-1]);c++;}}
    int i=x;
    ll s=0,ans=0;
    for(;i<v.size();i++)
    {
        cout<<v[i]-v[i-x]<<" "<<i<<"\n";
        ans=max(ans,v[i]-v[i-x]);
    }
    for(i=1;i<x;i++)
    {
        cout<<v[i]+v[v.size()-1]-v[v.size()-(x-i)-1]<<" "<<i<<"\n";
        ans=max(ans,v[i]+v[v.size()-1]-v[v.size()-(x-i)-1]);
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