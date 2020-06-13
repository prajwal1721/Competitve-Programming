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
    ll n,t;cin>>n;
    vector<ll> ans;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    ll pre=v[0];
    ans.push_back(v[0]);
    for(int i=1;i<n;)
    {
        if(v[i]>pre)
        {
            while(i<n && v[i]>pre){pre=v[i];i++;}
            ans.push_back(pre);
        }
        else if(v[i]<pre)
        {
            while(i<n && v[i]<pre){pre=v[i];i++;}
            ans.push_back(pre);
        }
    }
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++){cout<<ans[i]<<" ";}
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