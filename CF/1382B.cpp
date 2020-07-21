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
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;
        v.push_back(t);
        if(t==1)m++;
    }
    t=v.size();
    ll f=0,i=0;
    if( n%2 && m==n || !m){cout<<"First\n";return ;}
    if(n==m && n%2==0){cout<<"Second\n";return ;}
    while(v[i]==1){f=!f;i++;}
    if(!f){cout<<"First\n";return ;}
    else {cout<<"Second\n";}
    // else if(t==0 )
    // else if( t%2 ){cout<<"FIRST\n";}
    
    

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