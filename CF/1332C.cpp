
// link:https://codeforces.com/contest/1332/problem/C
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
	ll n,k;cin>>n>>k;
	string s;cin>>s;
	vector<string> v;
	for(ll i=0;i<n;i+=k)
	{
		string temp="";
		for(ll p=i;p<i+k;p++)
			temp+=s[p];
		v.push_back(temp);
	}
	ll ans=0,fix=s.length()/k*2;
	// cout<<fix<<"\n";
	// for(ll i=0;i<v.size();i++)
		// cout<<v[i]<<"\n";
	for(ll j=0;j<k/2;j++)
	{
		ll cnt[26]={0};
		for(ll i=0;i<(ll)v.size();i++)
		{
			// cout<<v[i][j]<<" "<<v[i][k-j-1]<<" ";
			cnt[v[i][j]-'a']++;cnt[v[i][k-j-1]-'a']++;
		}
		// cout<<"\n";
		ll mx=0;
		for(ll i=0;i<26;i++)
		{
			mx=max(mx,cnt[i]);
		}
		// cout<<mx<<"::";
		ans+=fix-mx;
	}
	if(k%2)
	{
		// cout<<"in\n";
		ll cnt[26]={0};
		for(ll i=0;i<(ll)v.size();i++)
		{
			cnt[v[i][k/2]-'a']++;
		}
		ll mx=0;
		for(ll i=0;i<26;i++)
		{
			mx=max(mx,cnt[i]);
		}
		// cout<<mx<<"::";
		ans+=fix/2-mx;
	}
	cout<<ans<<"\n";
}


int main()
{   

// #ifndef LOCAL
	// freopen("CP/input.txt","r",stdin);
	// cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
	// freopen("CP/output.txt","w",stdout);
// #endif
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
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
