// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments: not solved 
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
float timeCal(ll a,ll b,ll c)
{
    if(c==0)return -1;
    return (float)sqrt(a*a+b*b)/(double)c;
}
ll cal(int n)
{
    if(n%2==0)return (n/2)*(n-1);
    return (n)*((n-1)/2);
}
void solve()
{
    ll n,a,b,c;cin>>n;
    vector<float> v;
    // map<double,vector<ll>>
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(b!=0)
        v.push_back({timeCal(abs(a),abs(b),c)});
        else 
        v.push_back({timeCal(abs(a),abs(b),c)});
    }
    map<float,ll>mp;
    int ans=0;
    for(int i=0;i<n;i++)if(v[i]!=-1)mp[v[i]]=0;
    for(int i=0;i<n;i++)if(v[i]!=-1)mp[v[i]]++;
    for(auto m:mp)ans+=(ll)cal(m.second);
    cout<<ans<<"\n";
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