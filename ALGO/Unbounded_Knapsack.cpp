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
    ll n,t,t1,w;cin>>n>>w;    
    vector<ll>v1,v2;
    for(ll i=0;i<n;i++)
    {
        cin>>t;v1.push_back(t);
    }
    for(ll i=0;i<n;i++)
    {
        cin>>t;v2.push_back(t);
    }
    ll ans[w+2]={0};

    for(ll i=1;i<=w;i++)
    {
        ll m=0;
        ans[i]=INT32_MIN;
        for(ll j=1;j<=n;j++)
        {
            if(v1[j]<i)
            ans[i]=max(ans[i],ans[i-v1[j]]+v2[j]);
        }
        cout<<i<<" "<<ans[i]<<"\n";
    }
    cout<<ans[w-1]<<"\n";

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