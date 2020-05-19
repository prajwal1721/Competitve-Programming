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
#define mx 1002



typedef long long int ll;
ll par[mx]={0},sz[mx]={0};
ll find(ll a)
{
    if(a==par[a])return a;
    return par[a]=find(par[a]);
}
void uni(ll a,ll b)
{
    if(sz[a]<sz[b]){ll t=a;a=b;b=t;}
    par[b]=a;
    sz[a]+=sz[b];
}

void solve()
{
    ll n,a,b;cin>>n;
    for(int i=0;i<n+4;i++)
        {par[i]=i;sz[i]=1;}
    vector<pair<ll,ll>>extra;
    for(int i=1;i<n;i++)
    {
        cin>>a>>b;
        ll c_a=a,c_b=b;
        a=find(a);
        b=find(b);
        if(a==b){extra.push_back({c_a,c_b});}
        else uni(a,b);
    }
    set<ll> s;
    for(int i=1;i<=n;i++)
    {
        s.insert(find(i));
    }
    vector<ll>temp(s.begin(),s.end());
    cout<<extra.size()<<"\n";
    for(int i=0;i<extra.size();i++)
    {
        cout<<extra[i].first<<" "<<extra[i].second<<" "<<temp[i+1]<<" "<<temp[i]<<"\n";
    }
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