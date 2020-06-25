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
    ll n;cin>>n;
    string s;cin>>s;
    string ans="";
    ll pre=0,i=0;
    string t="";
    if(s.length()==1){cout<<s<<"\n";return ;}
    if(s.length()==2 && s=="10"){cout<<"0\n";return ;}
    if(s.length()==2 ){cout<<s<<"\n";return ;}
    while(i<s.length() && s[i]=='0'){pre=i;i++;ans+='0';}
    while(i<s.length() && s[i]=='1'){t+='1';i++;}
    if(i==s.length())ans+=t;
    else
    {
        ans+='0';
        if(s[s.length()-1]=='1')
        {
            i=s.length()-1;t="";
            while(s[i]=='1'){i--;t+='1';}
        ans+=t;
        }
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