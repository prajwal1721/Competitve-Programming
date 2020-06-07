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
void solve()
{
ll arr[51][51]={0};
ll row[51]={0},col[51]={0};
    ll n,m;cin>>n>>m;
     queue<pair<ll,ll>> q;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==0){q.push({i,j});}
            else {row[i]=1;col[j]=1;}
        }
    }
    ll a=0,v=0,c=1;
    while (!q.empty())
    {
        auto t=q.front();q.pop();
        if(arr[t.first][t.second]==1)continue;
        if(row[t.first]==1 || col[t.second]==1)continue;
        // cout<<t.first<<" "<<t.second<<"\n";
        for(int i=0;i<m;i++)
        {
                arr[t.first][i]=1;
        }
        for(int i=0;i<n;i++)
        {
            arr[i][t.second]=1;
        }
        c=c^1;
        // cout<<c<<" ";
    }
        if(!c)cout<<"Ashish\n";
        else cout<<"Vivek\n";

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