#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define mod 100000007
typedef long long int ll;
int main()
{
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	ll t, n, k;
	cin >> n >> k;
	vector<ll> v;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		v.push_back(t);
	}
	ll cnt = 0;
	for (ll j = 62; j >= 0; j--)
	{
		vector<ll> nv;
		for (int i = 0; i < v.size(); i++)
		{
			if ((v[i] & (1LL << j)) == (1LL << j))
			{
				nv.push_back(v[i]);
			}
		}
		if ((ll)nv.size() >= k)
		{
			// cout<<nv.size()<<';';
			v = nv;
			cnt = nv.size();
		}
	}
	ll mx = v[0];
	// cout << k << "\n";
	for (int i = 1; i <  k; i++)
	{
		mx = (mx & v[i]);
		// cout << v[i] << ' ';
	}
	cout<<mx<<'\n';
	return 0;
}
