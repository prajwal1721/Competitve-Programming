/**
 * Givin an array of numbers determine the max sum possible which is divisible by 3
 * for mod k we need to use dp
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s = 0, n, t;
    long long int mn2_mod2 = INT32_MAX, mn1_mod1 = INT32_MAX, mn1_mod2 = INT32_MAX, mn2_mod1 = INT32_MAX;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
        s += t;
        if (t % 3 == 1)
            mn1_mod1 = min(mn1_mod1, (long long)t);
        if (t % 3 == 2)
            mn1_mod2 = min(mn1_mod2, (long long)t);
    }
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 3 == 1 && v[i] > mn1_mod1)
            mn2_mod1 = min(mn2_mod1, (long long)v[i]);
        if (v[i] % 3 == 2 && v[i] > mn2_mod1)
            mn2_mod2 = min(mn2_mod2, (long long)v[i]);
        if (mn1_mod1 == v[i])
            cnt1++;
        if (mn1_mod2 == v[i])
            cnt2++;
    }
    if (cnt1 >= 2)
        mn2_mod1 = mn1_mod1;
    if (cnt2 >= 2)
        mn2_mod2 = mn1_mod2;
    if (s % 3 == 1)
        s -= min(mn1_mod1, mn2_mod2 + mn2_mod2);
    else if (s % 3 == 2)
        s -= min(mn1_mod1 + mn2_mod1, mn1_mod2);
    cout << max(s, 0) << "\n";
}