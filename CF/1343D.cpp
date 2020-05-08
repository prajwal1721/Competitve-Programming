// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
*/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;
void solve()
{
    ll n, k, t;
    cin >> n >> k;
    vector<ll> v;
    // map<ll,ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
    }
    vector<ll> prefix(2 * k + 2), mp(2 * k + 1);
    for (ll i = 0; i < n / 2; i++)
    {
        mp[v[i] + v[n - i - 1]]++;
        ll l1 = 1 + v[i], l2 = v[n - 1 - i] + 1, r1 = k + v[i], r2 = k + v[n - 1 - i];
        // if(max(l1,l2)<=min(r1,r2))continue;
        prefix[min(l1, l2)]++;
        prefix[max(r1, r2) + 1]--;
    }
    for (ll i = 1; i <= 2 * k + 1; i++)
    {
        prefix[i] += prefix[i - 1];
    }
    ll ans = 1e9;
    for (ll i = 2; i <= 2 * k; i++)
    {
        ans = min(ans, (prefix[i] - mp[i]) + (n / 2 - prefix[i]) * 2);
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    // cout<<t<<"Hi test complete\n";
    while (t--)
    {
        solve();
    }

    return 0;
}