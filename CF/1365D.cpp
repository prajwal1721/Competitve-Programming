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
ll dp[51][51]={0};
char arr[51][51];
vector<pair<ll,ll>> g,b;
queue<pair<ll,ll>> q;
ll v[51][51]={0};
void solve()
{
    ll n,m;cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            dp[i][j]=0;v[i][j]=0;
            if(arr[i][j]=='G')g.push_back({i,j});
            if(arr[i][j]=='B')b.push_back({i,j});
        }
    }
    for(auto p:b)
    {
        ll i=p.first,j=p.second;
        // cout<<i<<" "<<j<<"\n";
        if(i+1<n && arr[i+1][j]=='.'){arr[i+1][j]='#';}
        if(i-1>=0 && arr[i-1][j]=='.'){arr[i-1][j]='#';}
        if(j+1<m && arr[i][j+1]=='.'){arr[i][j+1]='#';}
        if(j-1>=0 && arr[i][j-1]=='.'){arr[i][j-1]='#';}
    }
    if(arr[n-1][m-1]=='.' || arr[n-1][m-1]=='G'  ){q.push({n-1,m-1});dp[n-1][m-1]=1;}
    while (!q.empty())
    {
        ll i=q.front().first,j=q.front().second;q.pop();
        if(v[i][j])continue;
        v[i][j]=1;
        if(i-1>=0 && j>=0 && arr[i-1][j]!='#' ){dp[i-1][j]=1;q.push({i-1,j});}
        if(i>=0 && j-1>=0 && arr[i][j-1]!='#' ){dp[i][j-1]=1;q.push({i,j-1});}
        if(i<n && j+1<m && arr[i][j+1]!='#' ){dp[i][j+1]=1;q.push({i,j+1});}
        if(i+1<n && j<m && arr[i+1][j]!='#' ){dp[i+1][j]=1;q.push({i+1,j});}
    }
    ll f=1;
    for(auto p:g)
    {
        if(dp[p.first][p.second]==0){f=0;break;}
    }
    for(auto p:b)
    {
        if(dp[p.first][p.second]==1){f=0;break;}
    }
    g.clear();
    b.clear();
    while(!q.empty())q.pop();
    if(f==1)cout<<"Yes\n";
    else cout<<"No\n";
    

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