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
    ll n,k,t;cin>>n>>k;
    vector<ll>f1,f2,both;
    for(int i=0;i<n;i++){
        ll n1,t1,t2;
        cin>>n1>>t1>>t2;
        if(t1 && t2)
            both.push_back(n1);
        else if(t1)
            f1.push_back(n1);
        else if(t2)
            f2.push_back(n1);
    }
    sort(both.begin(),both.end());
    sort(f1.begin(),f1.end());
    sort(f2.begin(),f2.end());
    for(int i=1;i<both.size();i++)
        both[i]+=both[i-1];
    for(int i=1;i<f1.size();i++)
        f1[i]+=f1[i-1];
    for(int i=1;i<f2.size();i++)
        f2[i]+=f2[i-1];
    t=INT32_MAX;
    if(k<=both.size())t=both[k-1];
    for(int i=1;i<k;i++)
    {
        if(i<=f1.size() && i<=f2.size() && k-i<=both.size())
            t=min(f1[i-1]+f2[i-1]+both[k-i-1],t);
  
    }
    if(k<=f1.size() && k<=f2.size())t=min(f1[k-1]+f2[k-1],t);
    if(t==INT32_MAX)cout<<"-1\n";
    else cout<<t<<"\n";
}


int main()
{ 
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    // ll t;cin>>t;

    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}