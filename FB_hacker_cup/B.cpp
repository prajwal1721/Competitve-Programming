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
    ll n,t,m=0;cin>>n;
    string s;cin>>s;
    for(int i=0;i<n;i++){if(s[i]=='B')m++;}
    t=n-m;
    if(abs(t-m)==1)cout<<"Y\n";
    else cout<<"N\n";
}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t,i=1;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            cout<<"Case #"<<i<<": ";
            solve();
            i++;
        }


    return 0;
}