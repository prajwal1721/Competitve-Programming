// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/__gcd(a,b)))
#define bits(x) __builtin_popcountll(x)
#define vi              vector<int>
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())



typedef long long int ll;
void solve()
{
    ll n,t;cin>>n;
    set<ll>s;
    for(ll i=0;i<n;i++){cin>>t;s.insert(t);}
    vector<ll> v(s.begin(),s.end());
        for(ll i=1;i<v.size();i++)
            cout<<v[i]<<" ";cout<<"\n";
    while (v.size()>2)
    {
        set<ll> temp;
        temp.clear();
        for(ll i=0;i<v.size();i+=2)
        {
            if(i+1<v.size())
            temp.insert(lcm(v[i],v[i-1])%mod);
            else
            temp.insert(v[i]);
        }
        v.clear();
        for(ll i:temp)
            {
                v.push_back(i);            
                cout<<i<<" ";
            }
        cout<<"in \n";
    }
    ll ans=1;
    if(v.size()==2)
        ans=gcd(v[1],v[0]);
    else if(v.size()==1)
        ans=v[0];
    cout<<ans<<"\n";
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