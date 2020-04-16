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
    ll t,n;cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
        cin>>t;v.push_back(t);
    }
    sort(v.begin(),v.end());
    string  ans="";
    for(ll k=(n-1)/2,i=0;i<n;i++)
    {
        	if(i&1)cout<<v[k+(i+1)/2]<<' ';
			else cout<<v[k-i/2]<<' ';
    }
    cout<<"\n";
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