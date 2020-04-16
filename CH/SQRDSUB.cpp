#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll q;
    cin >> q;
    while (q--)
    {
        vector<ll> v;
        ll n, cn, t;
        cin >> n;
        cn = n;
        ll no = 0;
        while (n--)
        {
            cin >> t;
            v.push_back(t);
            // if(t==2)no++;
        }

        ll a[cn + 1] = {0};
        ll dp[cn + 1] = {0};
        ll ans = 0,stop=0,neg=0, pre = -1, cnt_2 = 0, f = 0, ind = -1, ind_n=-1;
        for (ll i = 0; i < cn; i++)
        {
            if(v[i]==0){f=3;}
            if (f == 3)
            {
                dp[i] = i + 1;
            }
            else if (v[i] % 4 == 0)
            {

                f = 3;
                dp[i]=i+1;
            }
            else if (v[i] % 2)
            {
                if (i > 0)
                {
                    if (f)
                    {
                        dp[i] = 1;
                        f = 0;
                        if (pre >= 0)
                            dp[i] += dp[pre] + 1;
                    }
                    else
                    {
                        dp[i] = dp[i - 1] + 1;
                    }
                }
                else
                {
                    dp[i] = 1;
                }
            }
            else
            {
                if (cnt_2 == 0)
                {
                    dp[i] = 0;
                    ind = i;
                    cnt_2++;
                }
                else
                {
                    pre = ind;
                    if (f)
                    {
                        dp[i] = dp[ind] + 1;
                        f = 0;
                    }
                    else if (ind > 0)
                    {
                        dp[i] = ind + 1;
                    }
                    else
                        dp[i] = 1;
                    f = 1;
                    ind = i;
                }
            }
            ans += dp[i];
        }

        cout << ans << "\n";
    }
}