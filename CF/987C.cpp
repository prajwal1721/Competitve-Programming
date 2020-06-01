// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;
vector<ll> sz,cost;
void solve()
{
    ll t,t1,n;cin>>n;
    for(int i=0;i<n;i++){cin>>t;sz.push_back(t);}
    for(int i=0;i<n;i++){cin>>t;cost.push_back(t);}
    ll ans=INT64_MAX;
    for(int i=1;i<n-1;i++)
    {
        t=t1=INT64_MAX;
        for(int j=i-1;j>=0;j--)
        {
            if(sz[i]>sz[j])t=min(t,cost[j]);
        }
        for(int j=i+1;j<n;j++)
        {
            if(sz[i]<sz[j])t1=min(t1,cost[j]);
        }
        // cout<<t<<"::"<<t1<<"\n";
        if(t!=INT64_MAX && t1!=INT64_MAX)
            ans=min(ans,t+t1+cost[i]);
        
    }
    if(ans==INT64_MAX)ans=-1;
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