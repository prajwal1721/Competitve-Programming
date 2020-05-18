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
    ll n,k,t;cin>>n>>k;
    vector<ll>v;v.push_back(0);
    for(int i=0;i<n;i++){cin>>t;v.push_back(v[i]+t);}
    ll j,s=INT32_MAX;
    for(int i=k;i<=n;i++)
    {
        if(s>v[i]-v[i-k])
        {
            j=i-k+1;
            s=v[i]-v[i-k];
        }
    }
    cout<<j<<"\n";
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