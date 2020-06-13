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
    ll n,a,b,c;cin>>n>>a>>b>>c;
    if(4-(n%4)==4)cout<<"0\n";
    else if(4-(n%4)==1)cout<<min(a,min(b+c,c*3))<<"\n";
    else if(4-(n%4)==2)cout<<min(b,min(2*a,min(c*2,c+a)))<<"\n";
    else cout<<min(a*3,min(b+a+c,min(c,a+b)))<<"\n";
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