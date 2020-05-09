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
#define vi              vector<int>
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())



typedef long long int ll;
void solve()
{
    ll t,n;cin>>n;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    ll dp[n+1]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(abs(v[i])>abs(v[j]) && (v[i]>0 && v[j]<0 || v[j]>0 && v[i]<0 ))
                dp[i]=max(dp[i],dp[j]+1);
        }
    }
    ll mx=0;
    for(int i=0;i<n;i++){mx=max(mx,dp[i]);}

    cout<<mx+1<<"\n";
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