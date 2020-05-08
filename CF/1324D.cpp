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
void solve()
{
    ll t,n,i,j,l,r,ans=0;
    vector<ll> a,b,d;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t;
        a.push_back(t);
    }
    for(i=0;i<n;i++)
    {
        cin>>t;
        b.push_back(t);
    }
    for(i=0;i<n;i++)
    {
        d.push_back(a[i] - b[i]);
    }
    sort(d.begin(),d.end());
    l=0;
    r=n-1;
    while(l<r)
    {
        if(d[l]+d[r]>0)
        {
            ans+=(r-l);
            r--;
        }
        else
            l++;
    }
    cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}