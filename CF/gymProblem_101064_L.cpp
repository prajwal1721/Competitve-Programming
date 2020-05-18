// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:   TLE
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
 ll dp[1003];
void solve()
{
    ll n,W,t1,t2;cin>>n>>W;
    map<ll,ll>val;set<ll>w;for(int i=0;i<n;i++){cin>>t1>>t2;w.insert(t1);
        if(val[t1]!=0)val[t1]=t2;
        else val[t1]=max(val[t1],t2);
    }
   
    for(int i=1;i<=W;i++)
    {
        dp[i]=0;
        for(auto p:w)
        {
            if(p<=i)dp[i]=max(dp[i],dp[i-p]+val[p]);
        }
    }
    cout<<dp[W]<<"\n";
}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout<<t<<"Hi test complete\n";
        {
            solve();
        }


    return 0;
}