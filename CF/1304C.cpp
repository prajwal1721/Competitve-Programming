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
    ll f=0,t=0,l,h,n,ini;cin>>n>>ini;
    l=h=ini;
    for(int i=0;i<n;i++)
    {
        ll time,low,high;
        cin>>time>>low>>high;
        if(f==1)continue;
        l=max(low,l-(time-t));
        h=min(high,h+(time-t));  
        if(l>h || h<low && l>high)f=1;
        t=time;
        // cout<<l<<" "<<h<<" "<<f<<"\n";
    }    
    cout<<(f==0?"YES":"NO")<<"\n";
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