#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> a, b;
ll n;
ll dp[3][300006];


ll cal(int pos, int add)
{

    if (dp[add][pos] != -1)
        return dp[add][pos];
    if (pos == n)
        return dp[add][pos]=0;
    ll t = INT64_MAX;
    for (int i = 0; i < 3; i++)
    {
        if (pos == 0 || a[pos] + i != a[pos - 1] + add)
            t = min(t, cal(pos + 1, i) + i * b[pos]);
    }
    dp[add][pos]=t;
    return t;
}
void solve()
{
    ll t, t1;
    cin >> n;
    a.clear();
    b.clear();
    // cout<<n<<"\n";
    for (int i = 0; i < n; i++)
    {
        cin >> t >> t1;
        a.push_back(t);
        b.push_back(t1);
        // if((i+1)%10==0)cout<<i<<":::::\n";
    }
    // cout<<"complete\n";
    for (int i = 0; i <= n + 5; i++)
        dp[0][i] = dp[1][i] = dp[2][i] = -1;
    cout << cal(0, 0) << "\n";
}
int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t11;
    cin >> t11;
    while (t11--)
    {
        solve();
    }
}