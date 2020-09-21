#include<bits/stdc++.h>
using namespace std; 

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// oset<pair<ll,ll>> indexed_set;

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;

void debug_out() { cerr << "]" << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
  cerr << H << ", ";
  debug_out(T...);
}

#ifdef _GLIBCXX_DEBUG
#define debug(x...) cerr << "[" << #x << "]:[", debug_out(x)
#else
#define debug(...) 42
#endif

void solve(){
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for(int i = 0;i<n;i++){
		cin >> a[i];
	}
	for(int i = 0;i< m;i++){
		cin >> b[i];
	}
	ll dp[n][m];
	memset(dp, 0, sizeof(dp));
	vector<int> ans;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			if(a[i-1] == b[j-1]){
				dp[i][j] = dp[i-1][j-1] + 1;
			} else {
				dp[i][j] = max({dp[i-1][j], dp[i][j-1]});
			}
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	
}

int main()
{   
	IOS;

 

	// ll t;cin>>t;
	// while(t--){
		solve();
	// }

    return 0;
}