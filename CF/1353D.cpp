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

#define pi tuple<ll,ll>

typedef long long int ll;
ll n,i=1;
pair<int, int> a[200020];
int z[200020];
void gao(int l, int r)
{
	if (l > r)
	{
		return;
	}
	int m = (l + r) / 2;
	a[m].first = l - r;
	a[m].second = m;
	gao(l, m - 1);
	gao(m + 1, r);
}
void solve()
{

		cin >> n;
		gao(1, n);
		sort(a + 1, a + 1 + n);
		for (int i = 1; i <= n; i++)
		{
			z[a[i].second] = i;
		}
		for (int i = 1; i <= n; i++)
		{
			cout << z[i] << ' ';
		}
		cout << "\n";
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