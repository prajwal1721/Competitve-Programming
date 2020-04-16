// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp




#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;


void solve()
{
    ll n,p,cn;cin>>n>>p;
    ll s=n*(n+1)/2;
    if(s==p || p%n==0)
    {
        cout<<"POSSILBE\n";
        ll visit[10]={0};
        for(ll i=1;i<=n;i++)
        {
            
        }
    }    
    else
    {
        cout<<"IMPOSSIBLE";
    }

}


int main()
{ 

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll t,i=1;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(i<=t)
        {
            cout<<"Case #"<<i<<": ";
            solve();
            i++;
            cout<<"\n";
        }


    return 0;
}