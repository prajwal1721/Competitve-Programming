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
    ll n,t;cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        cin>>t;v.push_back(t);
    }
    ll f=-1;
    ll cnt=1;
    for(ll i=1;i<n;i++)
    {
        // if(v[i]==n){cnt++;break;}
        if(v[i]>v[i-1] && f!=1){f=1;cnt++;}
        else if(f!=0 && v[i]<v[i-1] ) {f=0;cnt++;}
    }
    cout<<cnt<<"\n";
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