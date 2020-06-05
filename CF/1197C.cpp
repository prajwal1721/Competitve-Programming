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
    ll n,k;cin>>n>>k;
    ll a[n+1]={0};
	for(int i = 0; i < n; ++i)
		cin >> a[i];

	vector <int> v;
	for(int i = 1; i < n; ++i) v.push_back(a[i - 1] - a[i]);
	
	sort(v.begin(), v.end());
	
	int res = a[n - 1] - a[0];
	for(int i = 0; i < k - 1; ++i) res += v[i];
	
	cout << res << endl;
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