// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp




#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;
void solve()
{
    ll n;
    cin>>n;
    while(n!=0)
    {
        ll t;
        vector<ll>mp;
        queue<ll> need,supply;
        for(ll i=0;i<n;i++)
        {
            cin>>t;
            if(t>0)need.push(i);
            else supply.push(i);
            mp.push_back(t);
        }
        ll ans=0,cost=0;
        while(!need.empty() )
        {
            ll nd=need.front(),su=supply.front();
            // cout<<need.size()<<" "<<supply.size()<<"\n";
            // cout<<su<<" "<<nd<<"\n";
            if(abs(mp[nd])==abs(mp[su]))
            {
                cost+=abs(mp[su])*abs(nd-su);
                mp[nd]=mp[su]=0;
                supply.pop();need.pop();
            }
            else if(abs(mp[nd])>abs(mp[su]))
            {
                cost+=abs(mp[su])*abs(nd-su);
                mp[nd]=mp[nd]+mp[su];
                mp[su]=0;supply.pop();
                // cout<<mp[nd]<<"==\n";
            }
            else
            {
                cost+=abs(mp[nd])*abs(nd-su);
                mp[su]=mp[su]+mp[nd];
                mp[nd]=0;need.pop();
                // cout<<mp[su]<<"=ff=\n";
            }
        }
        cout<<cost<<"\n";
        cin>>n;
    }

}


int main()
{ 
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    // ll t;cin>>t;1
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}