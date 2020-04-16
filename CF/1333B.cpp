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
    ll t,cn;cin>>cn;
    vector<ll> v,req;
    for(ll i=0;i<cn;i++)
    {
        cin>>t;v.push_back(t);
    }
    for(ll i=0;i<cn;i++)
    {
        cin>>t;req.push_back(t);
    }
    ll p=0,n=0,f=0;
    for(ll i=0;i<cn;i++)
    {
        if(v[i]!=req[i])
        {
            if(v[i]>req[i] && n!=1 || v[i]<req[i] && p!=1){f=1;break;}
        }
        if(v[i]>0)p=1;
        else if(v[i]<0)n=1;
    }
    if(!f)cout<<"YES\n";
    else cout<<"NO\n";
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