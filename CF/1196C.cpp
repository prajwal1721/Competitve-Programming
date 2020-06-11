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
ll r[100002]={0},l[100002]={0},u[100002]={0},d[100002]={0};
void solve()
{
    ll n,x,y;cin>>n;
    vector<pair<ll,ll>> pos;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>l[i]>>u[i]>>r[i]>>d[i];
        pos.push_back({x,y});
    }
    ll x1=-100000,x2=100000,y1=100000,y2=-100000;
    for(int i=0;i<n;i++)
    {
        if(l[i]==0)x1=max(x1,pos[i].first);
        if(u[i]==0)y1=min(y1,pos[i].second);
    }
    for(int i=0;i<n;i++)
    {
        if(r[i]==0)x2=min(x2,pos[i].first);
        if(d[i]==0)y2=max(y2,pos[i].second);
    }
    // cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<"\n";
    if(x2<x1 || y2>y1){cout<<"0\n";return ;}
    cout<<"1 "<<(ll)(x1+x2)/2<<" "<<(ll)(y1+y2)/2<<"\n";
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