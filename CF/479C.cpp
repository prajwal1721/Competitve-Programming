// /prajwal

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        ll n,i=0,t;cin>>n;
        vector<pair<ll,ll>>a,b;
        while (i<n)
        {
            cin>>t;a.push_back(t,i);i++;
        }i=0;
        while (i<n)
        {
            cin>>t;b.push_back(t,i);i++;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
}