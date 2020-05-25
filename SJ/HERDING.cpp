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
vector<string>v;
ll ans=0,n,m;
ll visited[1001][1001]={0};
void dfs(ll i,ll j)
{
    if(i<0 || j<0 || i>=n || j>=m)return ;
    if(visited[i][j])return;
    visited[i][j]=1;
    if(i-1>=0 && v[i-1][j]=='S')dfs(i-1,j);
    if(i+1<n && v[i+1][j]=='N')dfs(i+1,j);
    if(j+1<m && v[i][j+1]=='W')dfs(i,j+1);
    if(j-1>=0 && v[i][j-1]=='E')dfs(i,j-1);
    if(v[i][j]=='S')dfs(i+1,j);
    else if(v[i][j]=='N')dfs(i-1,j);
    else if(v[i][j]=='W')dfs(i,j-1);
    else if(v[i][j]=='E')dfs(i,j+1);
}
void solve()
{
    cin>>n>>m;
    string s;
    for(int  i=0;i<n;i++)
    {
        cin>>s;v.push_back(s);
    }
    
    for(int  i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(!visited[i][j]){ans++;dfs(i,j);}
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