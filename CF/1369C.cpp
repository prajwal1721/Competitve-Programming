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
    ll n,t,f;cin>>n>>f;
    vector<ll> can,fri;for(int i=0;i<n;i++){cin>>t;can.push_back(t);}
    for(int i=0;i<f;i++){cin>>t;fri.push_back(t);}
    sort(can.begin(),can.end());
    sort(fri.begin(),fri.end(),greater<ll> ());
    ll happy=0,j=0;
    auto i=can.rbegin();
    
    vector<ll>hap;
    for(j=0;j<f;j++)
    {
        happy+=*i;
        hap.push_back(*i);
        i++;
    }
    ll pre=-1;j=0;
        // cout<<happy<<" ";
    for(ll ii=0;ii<n && j<f;)
    {
        if(fri[j]==1)break;
        happy+=can[ii];
        // cout<<can[ii]<<" ";
        if(fri[j]==1)break;
        ii+=(fri[j]-1);j++;
    }  
    ll p=0;
    for(;j<f;j++,p++)happy+=hap[p];
    j=0;
    // cout<<happy<<" ";
 
    cout<<happy<<"\n";
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