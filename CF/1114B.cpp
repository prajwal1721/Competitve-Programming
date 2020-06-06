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
    ll t,n,m,k;cin>>n>>m>>k;
    vector<pair<ll,ll>> v;for(int i=0;i<n;i++){cin>>t;v.push_back({t,i});}
    sort(v.begin(),v.end(),greater<pair<ll,ll>> ());
    ll sum=0;
    vector<ll> ind ;
    for(int i=0;i<m*k;i++)
    {
        sum+=v[i].first;
        ind.push_back(v[i].second);
    }
    sort(ind.begin(),ind.end());
    // for(int i=0;i<m*k;i++)cout<<ind[i]<<" ";cout<<"\n";
    vector<ll> ans;
    cout<<sum<<"\n";
    for(int i=0;i<k-1;i++)
    {
        cout<<ind[(i+1)*m-1]+1<<" ";
    }
    cout<<"\n";


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