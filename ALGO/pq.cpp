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
// vector<ll> v;
vector<ll> max_Heapify(vector<ll> v,ll i)
{
    ll l=2*i,r=2*i+1;
    ll large=i;
    if(l<v.size() && v[l]>v[large])large=l;
    if(r<v.size() && v[r]>v[large])large=r;
    // cout<<large<<":";
    if(large!=i)
    {
        {ll t=v[i];v[i]=v[large];v[large]=t;}
        return max_Heapify(v,large);
    }
    return v;
}
vector<ll > buildHeap(vector<ll> v)
{
    for(ll  i=(v.size()-1)/2;i>=1;i--)
    {
        v=max_Heapify(v,i);
        // cout<<i<<":";
        // for(int i=1;i<v.size();i++)cout<<v[i]<<" ";cout<<"\n";
    }
    return v;
}
void solve()
{
    ll n,t;cin>>n;
    vector<ll>v ;
    v.push_back(0);for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    v=buildHeap(v);
    for(int i=1;i<=n;i++)cout<<v[i]<<" ";cout<<"\n";
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