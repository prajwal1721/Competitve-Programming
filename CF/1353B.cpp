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
#define SWAP(x,y,t) t=x,x=y,y=t


typedef long long int ll;
void solve()
{
    ll n,t,k;cin>>n>>k;
    vector<ll> v1,v2;for(int i=0;i<n;i++){cin>>t;v1.push_back(t);}
    for(int i=0;i<n;i++){cin>>t;v2.push_back(t);}   
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end(),greater<ll>());
    for(int i=0,j=0;k!=0;)
    {
        if(v1[i]>=v2[j])break;
        else 
            {SWAP(v1[i],v2[j],t);j++;i++;}
            k--;
    }
    ll s=0;
    for(int i=0;i<n;i++)s+=v1[i];
    cout<<s<<"\n";
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