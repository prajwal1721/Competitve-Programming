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
// oset<pair<ll,ll>> indexed_set;




// struct HASH{
//		size_t operator()(const pair<int,int>&x)const{
//			return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
//   }
// };


void solve()
{
    // cout<<"hi";
    ll n,k,t;cin>>n>>k;ll cn=n;
    vector<ll> v;
    while (n--)
    {
        cin>>t;v.push_back(t);
    }
    k--;
    ll j=k-1,i=k+1,ans=0;
    if(v[k])ans++;
    while (j>=0 && i<cn)
    {
        if(v[j] && v[i])ans+=2;
        j--; i++;
    }
    while (j>=0){if(v[j])ans++;j--;}
    while (i<cn){if(v[i])ans++;i++;}
    cout<<ans<<"\n";
}


int main()
{ 
    // #ifndef DEBUG
        // freopen("CF/input.txt","r",stdin);
        // freopen("CF/output.txt","w",stdout);
        // cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
    // #endif
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
        // {
            solve();
        // }


    return 0;
}