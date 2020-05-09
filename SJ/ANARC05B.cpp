// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
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
    ll t, m, n;
    cin >> n;
    while (n != 0)
    {
        vector<ll> v1, v2;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            v1.push_back(t);
        }
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> t;
            v2.push_back(t);
        }
        ll k=1,ans = 0, s1 = 0, s2 = 0, i=0, j=0;
        while ( i<n && j<m)
        {
            if ( v1[i] == v2[j])
            {
                s2 += v2[j];
                s1 += v1[i];
                ans += max(s1, s2);
                s1 = 0;
                s2 = 0;
                i++;j++;
            }
            else if ( v1[i]<v2[j])
                {s1 += v1[i];
                i++;}
            else
                {s2 += v2[j];
                j++;}
        }
        while(i<n)
            s1+=v1[i++];
        while(j<m)
            s2+=v2[j++];
        ans+=max(s1,s2);
        cout << ans << "\n";
        cin>>n;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    // while(t!=0)
    {
        solve();
    }

    return 0;
}