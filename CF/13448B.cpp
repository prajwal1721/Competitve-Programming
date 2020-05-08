// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;
void init(ll arr[],ll n,vector<ll>s)
{
    for(int i=0;i<=n;i++)arr[i]=0;
    for(auto i:s)arr[i]++;
}
void solve()
{
    ll k,t,n;cin>>n>>k;
    if(k>n){cout<<"-1\n";return;}
    set<ll> uni;
    vector<ll>v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);uni.insert(t);}
    if(uni.size()>k){cout<<"-1\n";return ;}
    ll a[1000]={0};
    vector<ll> final;
    if(uni.size()<=k)
    {
        for(auto k:uni)final.push_back(k);
    }
    while(final.size()<k)final.push_back(final[0]);
    string ans="";
    for(auto p:final)ans+=to_string(p)+" ";
    cout<<n*final.size()<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<ans;
    }
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