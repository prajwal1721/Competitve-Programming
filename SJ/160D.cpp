// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:not done incomplete
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


#define MAX 200005 
typedef long long int ll;
ll par[MAX]={0},sz[MAX]={0};
ll find(ll a)
{
    if(a==par[a])return a;
    return par[a]=find(par[par[a]]);
}
void un(ll a,ll b)
{
    a=find(a);
    b=find(b);
    if(sz[b]>sz[a]){ll t=a;a=b;b=t;}
    par[b]=a;
    sz[a]+=sz[b];
}
void solve()
{
    ll a,b,w,n,m;cin>>n>>m;
    vector<tuple<ll,ll,ll>> v;
    map<tuple<ll,ll,ll>,ll>mp;
    for(int i=0;i<m;i++){cin>>a>>b>>w;v.push_back({w,a,b});}
    vector<tuple<ll,ll,ll>> v1(v.begin(),v.end());
    sort(v.begin(),v.end());
    for(int i=1;i<=n+2;i++){par[i]=i;sz[i]=1;}
    ll pre=-1;
    for(int i=0;i<m;i++)
    {
        tie(w,a,b)=v[i];
        cout<<a<<" "<<b<<" "<<w<<" ";
        ll c_a=find(a),c_b=find(b);
        if(pre!=-1 && w==pre && c_a==c_b){mp[{w,a,b}]=2;}
        else if(c_a!=c_b && sz[b]==1 && sz[a]==1){
            un(a,b);mp[{w,a,b}]=1;
            pre=-1;
        }
        else if(c_a!=c_b)
        {
            if(pre=-1)
                pre=w;
            un(a,b);mp[{w,a,b}]=2;
        }
        else 
        {
            mp[{w,a,b}]=3;
            pre=-1;
        }
        cout<<mp[v[i]]<<"\n";
    }
    for(int i=0;i<m;i++)
    {
        cout<<mp[v1[i]]<<"\n";
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