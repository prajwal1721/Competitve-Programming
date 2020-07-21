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
    ll n,t,m;cin>>n;
    string s;cin>>s;
    string day[]={"mon", "tues", "wed", "thurs", "fri", "sat" ,"sun"};
    ll d[7]={0};
    ll c=0;
    for(int i=0;i<7;i++){if(s==day[i]){c=i;break;}}
    for(int i=0;i<n;i++)
    {
        d[c]++;
        c=(c+1)%7;
    }
    for(int i=0;i<7;i++){cout<<d[i]<<" ";}cout<<"\n";

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