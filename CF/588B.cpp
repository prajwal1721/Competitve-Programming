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
    for(ll i=2;i*i<=n;)
    {
        // cout<<i<<" ";
        if(n%i==0)
        {
            // cout<<"::\n";
            if(n%(i*i)==0)
                n/=i;
            // else i++;
            // else if(n%((n/i)*(n/i))==0)
                // n=n/(n/i);
            else i++;
        }
        else 
            i++;
    }
    cout<<n<<"\n";
    

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