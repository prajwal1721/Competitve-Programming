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
ll n,k,t;
vector<ll> v;
bool check(ll m,ll c)
{
    ll cnt=0,req=c;
    for(int i=0;i<n;i++)
    {
        if(!req)
        {
            cnt++;
            req^=1;
        }
        else 
        {
            if(v[i]<=m)
            {
                cnt++;
                req^=1;
            }
        }
    }
    return cnt>=k;
}
ll bs(ll st,ll ed)
{
    while(st<=ed)
    {
        ll m=(st+ed)/2;
        if(ed==st)return st;
        if(check(m,1) || check(m,0))
            ed=m;
        else 
            st=m+1;
    }
    
}
void solve()
{
    cin>>n>>k;    
    for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    ll st=0,ed=1e9;
    cout<<bs(st,ed)<<"\n";
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