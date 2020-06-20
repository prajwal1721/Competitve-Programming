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
int primeFactors(int n)
{
    int odd = 0, even = 0;
    while (n % 2 == 0)
    {
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            if (i % 2)
            {
                odd++;
            }
            n = n / i;
        }
    }
    if (n > 2)
    {
        if (n % 2)
        {
            odd++;
        }
    }
    return odd;
}
void solve()
{
    ll n;
    cin >> n;
    ll cnt = 0;
    if (n == 1)
    {
        cout << "FastestFinger\n";
        return;
    }
    else if (n == 2)
    {
        cout << "Ashishgup\n";
        return;
    }
    if (n % 4 == 0 && ceil(log2(n)) != floor(log2(n)))
    {
        cout << "Ashishgup\n";
        return;
    }
    else if (ceil(log2(n)) == floor(log2(n)))
    {
        cout << "FastestFinger\n";
        return;
    }
    else if (n % 2 == 0)
    {
        ll t = n / 2, f = 0;
        f = primeFactors(t);
        if (f >= 2)
            cout << "Ashishgup\n";
        else
            cout << "FastestFinger\n";
        return;
    }
    else
    {
        cout << "Ashishgup\n";
        return;
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