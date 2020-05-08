// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;
ll a[26]={0};
ll check(int q)
{
    ll ans=0;
    for(int i=0;i<26;i++)ans+=max(0LL,a[i]-q);
    return ans;
}
void solve()
{
    for(int i=0;i<26;i++)a[i]=0;
    ll n,q;cin>>n>>q;
    string s;cin>>s;
    for(int i=0;i<n;i++)a[s[i]-'a']++;
    for(int i=0;i<q;i++){cin>>n;cout<<check(n)<<"\n";}
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