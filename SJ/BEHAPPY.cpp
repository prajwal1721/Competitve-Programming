// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b))
#define bits(x) __builtin_popcountll(x)
#define vi vector<int>
#define vl vector<ll>
#define vp vector<pair<ll,ll>>
#define all(v)          v.begin(),v.end()
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())



typedef long long int ll;
ll dp[101][21]={0};
void solve()
{
    ll n,t,k;cin>>n>>k;
    vl v1,v2;
    for(int i=0;i<k;i++){cin>>t;v1.push_back(t);}
    for(int i=0;i<k;i++){cin>>t;v2.push_back(t);}
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            for(int p=v1[j-1];p<=v2[j-1];p++)
                if(i-p>0)
                    dp[i][j]=dp[i-p][]
                else if(i==p)dp[i][j]=1;
        }
    }
    

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