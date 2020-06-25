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
    string s;
    cin >> s;
    stack<char> sk;
    sk.push(s[0]);
    int cnt = 0;
    for (int i = 1; i < s.size(); i++)
    {

        if (sk.empty() == true)
        {
            sk.push(s[i]);
        }
        else if (sk.top() != s[i])
        {
            sk.pop();
            cnt++;
        }
        else
        {
            sk.push(s[i]);
        }
    }
    if (cnt % 2)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NET" << endl;
    }
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