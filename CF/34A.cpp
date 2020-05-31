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
    ll n;cin>>n;
    string s;
    ll ans=0,pre=-1;
    for(int i=0;i<n;i++)    
    {
        cin>>s;
        if(s[0]-'0'==pre)ans++;
        // cout<<ans<<" ";
        pre=s[s.length()-1]-'0';
    }
    cout<<ans+1<<"\n";
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