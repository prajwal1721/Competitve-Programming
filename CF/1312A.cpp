#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        ll q;cin>>q;
        while (q--)
        {
        ll n, m;
        cin >> n >> m;
        if(n%m==0)cout<<"YES\n";
        else cout<<"NO\n";
        }
}