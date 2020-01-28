#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll n,x;
    cin>>n>>x;
    map<ll,ll> mp;
    for(ll i = 0; i<n;i++)
    {
        ll inp;
        cin>>inp;
        mp[inp]++;
    }
    ll count=0;
    for(auto it = mp.begin();it != mp.end(); it++)
    {
        if(it->second == 1)
        {
            count++;
        }
    }
    ll ans = ((ll)(pow(2,floor((count)))-1)*2)%mod+((ll)(pow(2,ceil((count)/2))-1)*2)%mod;
    // cout<<count;
    cout<<ans%mod<<endl;
    return 0;
}