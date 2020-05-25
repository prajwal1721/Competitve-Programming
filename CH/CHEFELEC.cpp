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
    string s;
    ll t,n;cin>>n>>s;
    // s='1'+s+'1';
    vector<ll>v;
    for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    ll pre,ans=0;
    // cout<<s<<"\n";
    pre=v[0];
    int i=0;
    // forward
    for(;i<=s.length() && s[i]!='1';i++);
    ans+=v[i]-pre;
    // backward
    pre=i=s.length()-1;pre=v[pre];
    for(;i>=0 && s[i]!='1';i--);
    ans+=pre-v[i];
    vector<ll> one;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='1')one.push_back(i);
    }
    for(i=1;i<one.size();i++)
    {
        ll a=one[i-1],b=one[i],mx=INT64_MAX;
        for(ll j=a;j<b;j++)
        {
            mx=min(mx,v[j]-v[a]+v[b]-v[j+1]);
        }
        ans+=mx;
    }
    cout<<ans<<"\n";
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