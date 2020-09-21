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
    vector<ll > v;
    for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    ll ans=0;
    
    ll c=0;
    for(int i=0;i<62;i++){
        c=0;
        for(int j=0;j<n;j++){
            if(((1LL<<i)&v[j])==(1LL<<i)){
                ans+=((1LL<<i)*(c+1)*(n-j));
                c=0;
            }
            else c++;
        }
    } 
    cout<<ans<<'\n';

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