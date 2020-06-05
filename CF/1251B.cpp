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
    ll n,odd=0,ans=0,l_one=0,l_zero=0,one=0,zero=0;cin>>n;
    string s;vector<string> v;
    for(int i=0;i<n;i++){cin>>s;l_zero=l_one=0;
        for(int j=0;j<s.length();j++)
          {
            if(s[j]=='0')l_zero++;
            else l_one++;
        }
        if(s.length()%2==0 && l_one%2)
        {
            ans++;
            one+=(l_one%2);zero+=(l_zero%2);
        }
        else if(s.length()%2)odd++;
    }   
    // cout<<ans<<" ";
    if(ans%2==0 || ans%2 && odd)cout<<n<<"\n";
    else cout<<n-1<<"\n";

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