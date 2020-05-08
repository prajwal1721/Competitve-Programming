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

    typedef int ll;

    ll c, n;
    ll check(ll m,vector<ll> v)
    {
        ll cows = 1, pre = v[0];
        for (ll i = 1; i < n; i++)
        {
            if (v[i] - pre >= m)
            {
                cows++;
                pre = v[i];
                if (cows == c)
                    return 1;
            }
        }
        return 0;
    }
    ll check1(vector<ll> v)
    {
        ll mx = -1, st = 0, ed = v[n - 1];
        while (st < ed)
        {
            // cout<<st<<" "<<ed<<"\n";
            ll m = (st + ed) / 2;
            if (check(m,v) == 1)
            {
                if (m > mx)
                    mx = m;
                st = m + 1;
            }
            else
                ed = m;
        }

        return mx;
    }
    void solve()
    {
        ll t;
        cin >> n >> c;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            cin >> t;
            v.push_back(t);
        }
        sort(v.begin(), v.end());
        cout << (int)check1(v) << "\n";
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