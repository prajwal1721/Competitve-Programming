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
void solve()
{
    string s;cin>>s;
    ll cnt=0;
    char st='A',ed='Z';
    for(int i=0;i<s.length();i++){if(s[i]>='a'&& s[i]<='z')cnt++;}
    cnt=(cnt>=(s.length()+1)/2)?0:1;
    if(cnt==0){st='a';ed='z';}
    for(int i=0;i<s.length();i++){if(s[i]<st ||  s[i]>ed)s[i]=s[i]+2*st-'a'-'A';}
    cout<<s<<"\n";
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