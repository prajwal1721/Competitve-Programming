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
    vector<pair<ll,ll>> v1,v2;
    vector<ll>g;
    double f1=0.00000,f2=0;
    for(int i=0;i<n;i++)
    {
        ll gold,t1,t2;
        cin>>gold>>t1>>t2;
        f1+=((double)gold/(t1+t2))*(double)t2;
        f2+=((double)gold/(t1+t2))*(double)t1;
    }
    printf("%0.6lf %0.6lf\n",f1,f2);

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