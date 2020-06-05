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
/*
void solve()
{
    ll t,n;cin>>n;
    // unordered_map<ll,ll> mp;
    ll mp[200005]={0};
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);mp[t]++;}
    // for(int i=0;i<n;i++){mp[v[i]]++;}
    ll mx=0;
    for(int i=0;i<n;i++)
        if(mp[mx]<mp[v[i]])mx=v[i];
    ll i=0;
    for(;i<n;i++)
        if(v[i]==mx)break;
    // cout<<mx<<"\n";
    cout<<n-mp[mx]<<"\n";
    for(ll j=i-1;j>=0;j--)
    {
        if(v[j]==v[j+1])continue;
        if(v[j]>v[j+1]){cout<<"2 "<<j+1<<" "<<j+2<<"\n";v[j]=v[j+1];}
        if(v[j]<v[j+1]){cout<<"1 "<<j+1<<" "<<j+2<<"\n";v[j]=v[j+1];}
    }
    // cout<<"get\n";
    // cout<<i<<"\n";
    for(ll j=i+1;j<n;j++)
    {
        if(v[j]==v[j-1])continue;
        if(v[j]>v[j-1]){cout<<"2 "<<j+1<<" "<<j<<"\n";v[j]=v[j-1];}
        if(v[j]<v[j-1]){cout<<"1 "<<j+1<<" "<<j<<"\n";v[j]=v[j-1];}
    }
   
}
*/
void solve()
{
    ll t,n;cin>>n;
    unordered_map<ll,ll> mp;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);mp[t]=0;}
    mp[0]=0;
    for(int i=0;i<n;i++){mp[v[i]]++;}
    ll mx=0;
    for(auto m:mp)
        if(mp[mx]<m.second)mx=m.first;
        ll i=0;
    
    for(;i<n;i++)
        if(v[i]==mx)break;
    cout<<n-mp[mx]<<"\n";
    for(ll j=i-1;j>=0;j--)
    {
        // if(v[j]==mx)continue;
        if(v[j]>mx){cout<<"2 "<<j+1<<" "<<j+2<<"\n";v[j]=mx;}
        if(v[j]<mx){cout<<"1 "<<j+1<<" "<<j+2<<"\n";v[j]=mx;}
    }
    for(ll j=i+1;j<n;j++)
    {
        if(v[j]==mx)continue;
        if(v[j]>mx){cout<<"2 "<<j+1<<" "<<j<<"\n";v[j]=mx;}
        if(v[j]<mx){cout<<"1 "<<j+1<<" "<<j<<"\n";v[j]=mx;}
    }
   
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