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

 ll bs(ll  n,ll s)
{
    ll st=0,ed=1001,ans=INT32_MAX;
    while(st<ed)
    {
        ll m=(st+ed)/2;
        if(n*m>s){
            ans=min(ans,m);
            ed=m;
        }
        else  
            st=m+1;
    }
    return ans;
}
void solve()
{
    ll n,t,m,s=0;cin>>n;
    for(int i=0;i<n;i++){cin>>t;s+=t;}
    cout<<bs(n,s)<<"\n";
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