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
    ll n,t;cin>>n;
    map<ll,ll>mp;
    vector<ll >v ;for(int i=0;i<n;i++){cin>>t;v.push_back(t);mp[t]=1;}
    ll ans=-1;    
    vector<ll>  vt;
    for(int  i=1;i<=1024;i++)
    {
       ll cnt=0; 
        for(auto j:v)
        {
            // cout<<j<<" "<< (i|j)<<"\n";
            if(mp[i^j]==1){mp[i^j]=2;vt.push_back((i^j));cnt++;}
            else break;
        }
        if(cnt==n){ans=i;break;}
        for(auto j:vt){mp[j]=1;}
        vt.clear();
    }
    cout<<ans<<"\n";

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