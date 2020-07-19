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
ll ans=0;
string s;
ll rec(char c,int st,int ed)
{
    ll cnt=0,cnt_=0;   
    if(st==ed)return (s[st]!=c);
    ll m=(ed-st+1)/2;
    for(int i=st;i<st+m;i++)
    {
        if(s[i]!=c)cnt++;
    }
    for(int i=st+m;i<=ed;i++)
    {
        if(s[i]!=c)cnt_++;
    }
    return min(cnt_+rec((char)(c+1),st,st+m-1),cnt+rec((char)(c+1),st+m,ed));

}
void solve()
{
    ll n,t,m;cin>>n;
    cin>>s;
    cout<<rec('a',0,n-1)<<"\n";


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