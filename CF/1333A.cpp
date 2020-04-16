#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll q;
    cin >> q;
    while (q--)
    {
        char arr[105][105];

        ll n, m;
        cin >> n >> m;

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (!(i % 2))
                    arr[i][j] = ((j % 2) ? 'W' : 'B');
                else
                    arr[i][j] = ((!(j % 2)) ? 'W' : 'B');
            }
        }
        if (arr[n - 1][m - 1] == 'W')
        {
            arr[n - 1][m - 1] = 'B';
        }
        else
        {
            if (arr[0][m - 1] == 'W')
                arr[0][m - 1] = 'B';
            else if (arr[n - 1][0] == 'W')
                arr[n - 1][0] = 'B';
        }

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
}