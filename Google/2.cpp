// maximun sum of array elements such that their sum is divisible by k

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, t, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
    }
    int dp[k][n + 1] = {0};
    for (int i = 0; i < k; i++)
        for (int j = 0; j < n; j++)
            dp[i][j] = 0;
    dp[v[0] % k][0] = v[0];
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            dp[j][i] = max(dp[j][i - 1], dp[j][i]);
            dp[(v[i] + dp[j][i - 1]) % k][i] = max(dp[(v[i] + dp[j][i - 1]) % k][i], dp[j][i - 1] + v[i]);
        }
    }
    /*
    for (int j = 0; j < k; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << dp[j][i] << " ";
        }
        cout << "\n";
    }
    */
    cout << dp[0][n - 1] << '\n';
}