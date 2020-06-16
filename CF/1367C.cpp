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
    ll n,x,c=0,ans=0;cin>>n>>x;
    string s; cin>>s;
    string s1;
    ll f=1,i=0,e=n-1;
    for(;i<s.length();i++)
    {if(s[i]=='1'){f=0;break;}}
    if(!f)
    {
            i=0;
            if(s[i]=='0')
            {
                while(s[i]=='0'){c++;
                i++;
                if(c>x)
                {ans++;break;}
                }
                c=0;
                while(s[i]=='0')
                {
                    i++;
                    c++;
                    if(c==x+1){ans++;c=0;}
                }
            }
        // cout<<ans<<" ";
        ll j=s.length()-1;
            if(s[j]=='0')
            {
                c=0;
                while(s[j]=='0'){c++;
                j--;
                if(c>x)
                {ans++;break;}
                }
                c=0;
                while(s[j]=='0')
                {
                    j--;
                    c++;
                    if(c==x+1){ans++;c=0;}
                }
            }
        // cout<<ans<<" ";
    c=0;
        for(;i<=e;i++)
        {
            if(s[i]=='1')
            {
                // cout<<c<<" ";
                if(c>=2*x+1){ans++;c-=(2*x+1);
                ans+=max(0LL,c/(x+1));}
                c=0;
            }
            else c++;
        }
        
    }
    else
    {
        c=0;ans++;
        
        for(int i=1;i<n;i++)
        {
            if(c==x){ans++;c=0;}
            else c++;
            // cout<<c<<" ";
        }
        // if(c)ans++;
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