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
ll findPivot(vector<ll> a,ll st,ll ed)
{
    if(st>ed)return  0;
    if(st==ed)return st;
    ll m=(st+ed)/2;
    if(m+1<=ed && a[m]>a[m+1])return  m+1;
    if(m-1>=st && a[m]<a[m-1])return  m;
    // cout<<m<<" ";
    if(a[ed]<a[m])
        return findPivot(a,m+1,ed);
    return findPivot(a,st,m-1);
}

void solve()
{
    ll n,t;cin>>n;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    cout<<findPivot(v,0LL,n-1)<<"\n";
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