// /prajwal

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        ll t,n,sum=0,m=0;cin>>n>>m;
        vector<ll> v;
        while (n--)
        {
            cin>>t;v.push_back(t);
        }
        sort(v.begin(),v.end());
        ll no=v[m-1];
        if( m!=n-1 && v[m]==v[m-1])
            cout<<"-1\n";
        else cout<<no<<"\n";
}