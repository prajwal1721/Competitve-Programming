/**
 *    author:  abhishekvtangod
 *    created:        
**/

#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define bits(x) __builtin_popcountll(x)
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl "\n"
#define debug(x) cerr << #x << ": " << x << " " << endl;

typedef long long int ll;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// oset<pair<ll,ll>> indexed_set;

// struct HASH{
//   size_t operator()(const pair<int,int>&x)const{
//     return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
//   }
// };

const int mxNM = 1e2 + 5;
ll dp[mxNM][mxNM];
char a[mxNM][mxNM];
ll n, m;

void dfs(int i, int j)
{
    ll curr = dp[i][j];
 
    if (a[i][j] == '_')
    {
        return;
    }
    if(a[i][j] == '0'){
     dp[i][j] = 0;
     curr = 1;
    }
    else
    {
    if (i - 1 >= 0 && dp[i - 1][j] != INT32_MAX)
    {
        dp[i][j] = min({dp[i][j], dp[i - 1][j] + a[i][j] - '0'});
    }

    if (j - 1 >= 0 && dp[i][j - 1] != INT32_MAX)
    {
        dp[i][j] = min({dp[i][j], dp[i][j - 1] + a[i][j] - '0'});
    }

    if (i + 1 < n && dp[i + 1][j] != INT32_MAX)
    {
        dp[i][j] = min({dp[i][j], dp[i + 1][j] + a[i][j] - '0'});
    }

    if (j + 1 < m && dp[i][j + 1] != INT32_MAX)
    {
        dp[i][j] = min({dp[i][j], dp[i][j + 1] + a[i][j] - '0'});
    }
    }

    if (curr > dp[i][j])
    {
        if (i - 1 >= 0 && a[i - 1][j] != '0' && dp[i - 1][j] > dp[i][j] + a[i - 1][j] - '0')
        {
            dfs(i - 1, j);
        }
        if (j - 1 >= 0 && a[i][j - 1] != '0' && dp[i][j - 1] > dp[i][j] + a[i][j - 1] - '0')
        {
            dfs(i, j - 1);
        }
        if (i + 1 < n && a[i + 1][j] != '0' && dp[i + 1][j] > dp[i][j] + a[i + 1][j] - '0')
        {
            dfs(i + 1, j);
        }
        if (j + 1 < m && a[i][j + 1] != '0' && dp[i][j + 1] > dp[i][j] + a[i][j + 1] - '0')
        {
            dfs(i, j + 1);
        }
    }
}

void zero_case(int i, int j)
{
    dp[i][j] = 0;

    if (i - 1 >= 0 && a[i - 1][j] != '0' && dp[i - 1][j] > dp[i][j] + a[i - 1][j] - '0')
    {
        dfs(i - 1, j);
    }
    if (j - 1 >= 0 && a[i][j - 1] != '0' && dp[i][j - 1] > dp[i][j] + a[i][j - 1] - '0')
    {
        dfs(i, j - 1);
    }
    if (i + 1 < n && a[i + 1][j] != '0' && dp[i + 1][j] > dp[i][j] + a[i + 1][j] - '0')
    {
        dfs(i + 1, j);
    }
    if (j + 1 < m && a[i][j + 1] != '0' && dp[i][j + 1] > dp[i][j] + a[i][j + 1] - '0')
    {
        dfs(i, j + 1);
    }
}

void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            dp[i][j] = INT32_MAX;
        }
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] == '0')
                dfs(i, j);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != '_' && dp[i][j] == INT32_MAX)
            {
                cout << "-1" << endl;
                return;
            }
            if (a[i][j] != '_')
                ans = max({ans, dp[i][j]});
        }
    }
    if (ans == INT32_MAX)
        ans = 0;
    cout << ans << "\n";
}

int main()
{
    IOS;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\Thangod\\Desktop\\zAbhi\\input.txt", "r", stdin);
    freopen("C:\\Users\\Thangod\\Desktop\\zAbhi\\output.txt", "w", stdout);
#endif

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}