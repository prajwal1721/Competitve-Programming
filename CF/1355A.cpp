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
int mx(string s1)
{
    int mx1=0;
    for(int i=0;i<s1.length();i++)
    {
        mx1=max(mx1,s1[i]-'0');
    }
    return mx1;
}
int mn(string s1)
{
    int mn1=9;
    for(int i=0;i<s1.length();i++)
    {
        mn1=min(mn1,s1[i]-'0');
    }
    return mn1;
}
void solve()
{
    string s1;
    ll k;cin>>s1>>k;
    ll p=stoll(s1);k--;
    while (k--)
    {
        ll i=(ll)(mn(s1)),j=(ll)(mx(s1));
        if(i==0 || j==0 )break;

        p+=i*j;
        s1=to_string(p);
        // cout<<s1<<" ";
    }
    cout<<s1<<"\n";
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