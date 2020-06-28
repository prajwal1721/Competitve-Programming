// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:
*/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a*(b/gcd(a,b))
#define bits(x) __builtin_popcountll(x)
#define vi vector<int>
#define vl vector<ll>
#define all(v) v.begin(), v.end()
#define UNIQUE(X) (X).erase(unique(all(X)), (X).end())

typedef long long int ll;
void solve()
{
  
        ll n,t;
        cin >> n;
        map<ll, ll> mp;
        ll high = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            mp[t]++;
            high = max({high, (ll)t});
        }
        if (mp[high] > 1)
        {
            cout << "NO" << endl;
            return;
        }

        for (auto u : mp)
        {
            if (u.second > 2)
            {cout << "NO" << endl;return;}
        }
        cout << "YES" << endl;
        for (auto u=mp.begin();u!=mp.end();u++)
        {
            if ((*u).second > 0)
            {
                cout << (*u).first << " ";mp[(*u).first]--;
            }
        }
        vector<int> v;
        for (auto u=mp.begin();u!=mp.end();u++)
        {
            if ((*u).second == 1)
                v.push_back((*u).first);
        }
        reverse(v.begin(), v.end());
        for (auto u : v)
        {
            cout << u << " ";
        }
        cout << endl;
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