// /prajwal

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        ll t,n,cn,m=0;cin>>n>>m;cn=n;
        vector<ll> v;
        v.push_back(1);
        while (cn--)
        {
            cin>>t;v.push_back(t);
        }
        sort(v.begin(),v.end());
        if(v[m]!=v[m+1])cout<<v[m]<<"\n";
        else cout<<"-1\n";
}