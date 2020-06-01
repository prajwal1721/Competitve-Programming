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
    ll n,t1,t2,x;cin>>n>>x;
    ll t=0;
    for(int i=1;i<n;i++)
    {
        cin>>t1>>t2;if(t1==x|| t2==x)t++;
    }
    ll f=0;
    if((n-t)%2)f=1;
    if((t-1)%2)f=!f;
    if(f || t==1 || t==0)cout<<"Ayush\n";
    else cout<<"Ashish\n";
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