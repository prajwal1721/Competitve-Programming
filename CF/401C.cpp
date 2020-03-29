#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;
int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll n, m;
    cin >> m >> n;
    // cout<<n<<" "<<m<<"\n";
    if (m > n + 1 || 2 * (m + 1) < n)
        cout << "-1\n";
    else
    {
        if (m >= n)
        {
            while ((m > 0 || n > 0))
            {
                if (m > 0)
                {
                    cout << "0";
                    m--;
                }
                if (n > 0)
                {
                    cout << "1";
                    n--;
                }
            }
            cout << "\n";
        }
        else
        {
            ll pre = 0;
            while (m > 0 || n > 0)
            {
                if (m * 2 < n && !pre && n > 0 && m > 0)
                {
                    cout << "11";
                    n -= 2;
                    pre = 1;
                }
                else if (pre && m > 0)
                {
                    cout << "0";
                    pre = 0;
                    m--;
                }
                else if (n > 0)
                {
                    cout << "1";
                    pre = 1;
                    n--;
                }
            }
            cout << "\n";
        }
    }
}