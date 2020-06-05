// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b))
#define bits(x) __builtin_popcountll(x)
#define vi              vector<int>
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())



typedef long long int ll;
ll freq[300005]={0};
void solve()
{
    ll n,m;cin>>n>>m;
    set<ll> s;
    vector<pair<ll,ll>> data;

    ll a,b;for(int i=0;i<m;i++){cin>>a>>b;data.push_back({a,b});freq[a]++;freq[b]++;s.insert(a);s.insert(b);}
    vector<pair<ll,ll>> v;
    ll c=0;
    for(auto k:s)
    {
        v.push_back({freq[k],k});
    }
    s.clear();
    // free(freq);
    ll ans=0;
    sort(v.begin(),v.end(),greater<pair<ll,ll>> ());
    for(auto k:v)
    {
        ll t=k.second;b=-1;a=-1;ll cnt_a=0,cnt_b=0;
        if(k.first<(m+1)/2)continue;
        for(int i=0;i<m;i++)
        {
            if(data[i].first!=t && data[i].second!=t && b!=-1)
            {
                if(data[i].first==a ||data[i].second==a)cnt_a++;
                if(data[i].first==b ||data[i].second==b )cnt_b++;
            }
            else if(data[i].first!=t && data[i].second!=t)
            {
                a=data[i].first;b=data[i].second;
                cnt_a++;cnt_b++;
            }
        }
        if(cnt_a+k.first>=m || cnt_b+k.first>=m){ans=1;break;}
    }
    if(ans==1)cout<<"YES\n";
    else cout<<"NO\n";
}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}