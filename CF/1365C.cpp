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
    ll t,n;cin>>n;
    ll dp1[200005]={0};    
    vector<ll>v1;
    map<ll,ll> mp;
    for(int i=0;i<n;i++){cin>>t;v1.push_back(t);}
    for(int i=0;i<n;i++){cin>>t;mp[t]=i;}
    for(int i=0;i<n;i++)
    {
        if(mp[v1[i]]>=i){dp1[mp[v1[i]]-i]++;}
        else {dp1[n-i+mp[v1[i]]]++;}
    }
    ll mx=0;
    for(int i=0;i<200005;i++)
    {
        if(dp1[mx]<dp1[i])mx=i;
        // cout<<dp1[i]<<" ";
    }
    cout<<dp1[mx]<<"\n";
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