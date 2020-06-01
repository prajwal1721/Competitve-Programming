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
ll cal(string s)
{
        ll z=0,n=s.length(),i=0,o=0;
    while (i<n && s[i]==s[0])i++;
    while (i<n && s[i]==s[n-1])i++;
    if(i>=n)return 0;        
    for(i=0;i<n;i++)if(s[i]=='1')o++;
    ll ans=INT32_MAX;
    ll t=min(o,n-o);
    for(i=0;i<n;i++)
    {
        // ans=min(ans,min(i-z+(o-z),z+n-(o-z)));// 111000  000001111
        if(s[i]=='1'){z++;ans=min(ans,min(o-z+i+1-z,z+n-(o-z)));}
        else ans=min(ans,min(z+n-(o-z),z+n-(o-z)-1-i));
        // cout<<ans<<" ";
    }
    return min(ans,t);
}
void solve()
{
    string s;cin>>s;
    cout<<cal(s)<<"\n";
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