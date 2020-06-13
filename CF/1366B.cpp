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
    ll n,x,m;cin>>n>>x>>m;
    ll s=x,e=x,l,r;
    for(int i=0;i<m;i++)
    {
        cin>>l>>r;
        if(s==e && s>=l && e<=r)s=l,e=r;
        else if(s!=e && ((l>=s && l<=e)  || (r>=s&&r<=e) || (l<=s && r>=e) )  ){s=min(l,s);e=max(e,r);}
        
        // cout<<e<<" "<<s<<"\n";
    }
    cout<<e-s+1<<"\n";
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