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
ll cost[5002][5002];
ll n,m;
string s1,s2;

void solve()
{
    ll mn=INT32_MAX,mx=0;
    cin>>n>>m;
    cin>>s1>>s2;
    for(int i=0;i<=n;i++)cost[i][0]=0;
    for(int i=0;i<=m;i++)cost[0][i]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
        {
            cost[i][j]=0;
            if(cost[i-1][j]>cost[i][j-1]){
                cost[i][j]=max(cost[i-1][j]-1,cost[i][j]);
            }
            else{
                cost[i][j]=max(cost[i][j-1]-1,cost[i][j]);
            }
            if(s1[i-1]==s2[j-1]){
                cost[i][j]=max(cost[i-1][j-1]+2,cost[i][j]);
            }
            mx=max(mx,cost[i][j]);
        }
    }
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=m;j++)
    //     {
    //         cout<<cost[i][j]<<" ";
    //     }
    //         cout<<"\n";
    // }

    cout<<mx<<"\n";
}


int main()
{ 
    ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    // ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}