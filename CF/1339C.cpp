
#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;
void solve()
{
    ll t,mx=0,n,pre;cin>>n>>pre;
    vector<ll> v;
    for(ll i=1;i<n;i++)
    {
        cin>>t;
        if(t<pre)mx=max(mx,pre-t);
        pre=max(pre,t);
    }
    cout<<ceil(log2(abs(mx)+1))<<"\n";
}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            solve();
        }


    return 0;
}