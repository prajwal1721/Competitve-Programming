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
ll freq[200005]={0};
void solve()
{
    ll n,t;cin>>n;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);freq[t]++;}
    if(n==1){cout<<"NO\n";return ;}
    sort(v.begin(),v.end());
    vector<ll> v1,v2;
    for(int i=0;i<n;i++)
    {
        if(freq[v[i]]>2){cout<<"NO\n";return ;}
        else if(freq[v[i]]==2){v1.push_back(v[i]);v1.push_back(v[i]);i++;}
        else v1.push_back(v[i]);
    }
    cout<<"YES\n";
    // for(auto s:v1)cout<<s<<" ";
    for(int i=0;i<v1.size();i++)cout<<v1[i]<<" ";
    for(int i=0;i<v2.size();i++)cout<<v2[i]<<" ";
    cout<<"\n";

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