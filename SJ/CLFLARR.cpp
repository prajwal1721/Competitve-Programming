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
#define mx 200005


typedef long long int ll;
ll par[mx]={0},sz[mx]={0};
ll mp[mx];
int find(int a)
{
    if(a==par[a])return a;
    return par[a]=find(par[a]);
}
void solve()
{
    int n,m;cin>>n>>m;
    vector<tuple<int,int,int>> v;
    int a,b,c;
    for(int i=1;i<=n+2;i++){par[i]=i;sz[i]=1;}
    for(int i=0;i<m;i++)
    {
        cin>>a>>b>>c;
        v.push_back( tie(a,b,c));
    }
    for(auto i=v.rbegin();i<v.rend();i++)
    {
        tie(a,b,c)=*i;
        // cout<<a<<" "<<b<<" "<<c<<"\n";
        for(int j=find(a);j<=b;j=find(j))
        {
            mp[j]=c;
            par[j]=j+1;
        }
    }
    for(int i=1;i<=n;i++)cout<<mp[i]<<"\n";
}


int main()
{ 
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    // ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}