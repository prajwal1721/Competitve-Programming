// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:good one understand 
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;
ll a[1000006]={0};
void solve()
{
    ll t=0,i,k;string s;cin>>k>>s;    
    a[0]=1;
    ll ans=0;
    for(i=0;i<s.length();i++)
    {
    if(s[i]=='1')t++;
    if(t>=k)ans+=a[t-k];
    a[t]++;
    }
    // for(i=0;i<=s.length();i++)
        // cout<<a[i]<<" ";cout<<"\n";
    cout<<ans<<"\n";
}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(n`ullptr);
    // ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}