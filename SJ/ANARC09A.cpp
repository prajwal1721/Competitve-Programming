// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
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
    cin>>s;
    int p=1;
    while(s.length()>0 && s[0]!='-' || s.length()==0)
    {
        cout<<p<<". ";p++;
        ll i=0,f=0;
        while(i<s.length() && s[i]!='{'){f++;i++;}
        ll ans=0,ch=0;
        for(;i<s.length();i++)
        {
            if(s[i]=='{')ch++;
            else if(ch!=0)ch--;
            else ans++;
        }
        if(s.length()==0)cout<<"0\n";
        else if(f%2 && ans%2 || ch%2 && f%2 || ans%2 && ch%2)cout<<(f/2+ans/2+2)<<"\n";
        else cout<<(ans/2+f/2+ch/2)<<"\n";
        cin>>s;
    }
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