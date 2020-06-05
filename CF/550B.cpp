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
vector<ll> v;
ll ans=0,l,r,t,n,x;
void get(ll i, ll s,ll mx,ll mn)
{
    if(i==n)return;
    for(int j=i+1;j<n;j++)
    {
        // cout<<s<<" ";
        if(s+v[j]<=r)get(j,s+v[j],max(mx,v[j]),min(mn,v[j]));
    }
    if(s>=l && s<=r && abs(mx-mn)>=x )ans++;
}
void solve()
{
    cin>>n>>l>>r>>x;
    for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    // sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
            get(j,v[i]+v[j],max(v[i],v[j]),min(v[i],v[j]));
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