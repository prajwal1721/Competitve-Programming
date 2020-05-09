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
ll a[10000]={0};
void solve()
{
    ll t,n,k;cin>>n>>k;
    vector<ll> v(k+1);v[0]=0;
    for(int i=0;i<k;i++){cin>>v[i+1];}
    for(int i=1;i<=k;i++)
    {
        a[i]=INT32_MAX;
        for(int j=1;j<=k;j++)
        {
            if(v[j]!=-1 && i-j>=0 && a[i-j]!=INT32_MAX)
            {
                a[i]=min(a[i-j]+v[j],a[i]);
            }
        }
    }
    // for(int i=0;i<=k;i++)
    if(a[k]!=INT32_MAX)
    cout<<a[k]<<" ";
    else cout<<"-1 ";
cout<<"\n";
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