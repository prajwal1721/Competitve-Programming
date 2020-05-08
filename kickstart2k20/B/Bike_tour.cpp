#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll t,n;cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
        cin>>t;v.push_back(t);
    }
    ll ans=0;
    for(ll i=1;i<n-1;i++)
    {
        if(v[i]>v[i-1]&& v[i]>v[i+1])ans++;
    }

    cout<<ans;
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