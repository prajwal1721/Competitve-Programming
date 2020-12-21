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
    ll n,t,m;
    cin>>n>>m;
    vector<int> break1;
    for(int i=0;i<n;i++){
        cin>>t;break1.push_back(t);
    }
    int agg=0;
    int dp[1+m];
    for(int i=0;i<=m;i++)dp[i]=0;
    for(int i=1;i<=m;i++){
        cin>>t;
        dp[t]++;
    }
    int c=0;
    for(int i=m;i>0;i--){
        c+=dp[i];
        if(c>=break1[i-1])agg++;
    }
    // for(int i=0;i<n;i++)cout<<dp[i]<<" ";cout<<"\n";
    cout<<agg<<"\n";
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