// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp




#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


ll check(ll a)
{
    ll st=1,ed=1e2;
    while(st<=ed)
    {
        ll m=(st+ed)/2;
        if(m*(m+1)==2*a)return m;
        else if(m*(m+1)>2*a){ed=m-1;}
        else st=m+1;
    }
    return 0;
}
void solve()
{
    ll cn,s=0,t,n;cin>>n;cn=n;
    vector<ll> v;
    v.push_back(0);
    while (n--)
    {
        cin>>t;
        s+=t;
        v.push_back(s);
    }
    vector<pair<ll,ll>>pr;
    for(ll i=1;i<=cn;i++)
    {
        t=v[cn]-v[i];
        if(check(v[i]) == i && check(t)== cn-i)
            pr.push_back({i,cn-i});
    }
    cout<<pr.size()<<"\n";
    for(auto  o=0;o<pr.size();o++)
    {
        cout<<pr[o].first<<" "<<pr[o].second<<"\n";
    }
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