#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll t,n,k;cin>>n>>k;
    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
        cin>>t;v.push_back(t);
    }
    ll mx=k;
    for(ll i=n-1;i>=0;i--)
    {
            mx=min((k/v[i])*v[i],(mx/v[i])*v[i]);
    }
    cout<<mx;
}
int main()
{
                cin.tie(nullptr);
            ios::sync_with_stdio(false);
    ll t,i=1;cin>>t;while (t--)
    {
        cout<<"Case #"<<i<<": ";
        solve();i++;
        cout<<"\n";
    }
    
}