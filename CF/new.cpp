
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
//   size_t operator()(const pair<int,int>&x)const{
//     return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
//   }
// };

void solve()
{
	
}


int main()
{   

#ifndef LOCAL
	freopen("CP/input.txt","r",stdin);
	cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
	freopen("CP/output.txt","w",stdout);
#endif
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

	ll t;cin>>t;
	cout<<t<<"Hi test complete\n"; 
	while(t--)
	{
		solve();
	}
	

    return 0;
}
