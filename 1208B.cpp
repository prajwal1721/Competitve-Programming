// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments: not solved 
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
    ll n,t;cin>>n;
    map<ll,ll> mp,rep;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);mp[v[i]]=0;}
    ll rp=0;
    for(int i=0;i<n;i++){
        if(mp[v[i]]==1){rep[v[i]]=-1;rp++;}
        else mp[v[i]]=1;
    }
    ll i,cnt=0,p1=-1,p2=-1;
    vector<ll>ind;
    ll p=0,ans=n;
    if(rp==0)ans=0;
    for(i=0;i<n;i++)
    {
        if(rep[v[i]]==-1)
        {
            rep[v[i]]=i;cnt++;
        }
        else rep[v[i]]=i;
        ll mx=0,mn=n;
        for(auto p:rep){mx=max(mx,p.second);mn=min(mn,p.second);}
        if(cnt>=rp)ans=min(ans,mx-mn+1);
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