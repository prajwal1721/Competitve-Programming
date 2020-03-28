// /prajwal

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        ll q;cin>>q;
        while (q--)
        {
        ll n, m;
        cin >> n;
        vector<ll> v;
        while (n--)
        {
            cin>>m;v.push_back(m);
        }
        sort(v.begin(),v.end(),greater<ll> ());
        for(auto i=v.begin();i!=v.end();i++)
            cout<<*i<<" ";
        cout<<"\n";
        }
}