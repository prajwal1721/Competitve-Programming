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
    ll n,t;cin>>n;
    vector<ll> v;for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    ll a[n+2]={0};
    for(int i=1;i<n;i++)if(v[i]-v[i-1]<=2)a[i]=1;
    ll mx=0;ll mn=n,s=0;
    for(int i=1;i<n+1;i++)
    {
        if(a[i]==1)s++;
        else {mx=max(mx,s);mn=min(mn,s);s=0;}
    }
    cout<<mn+1<<" "<<mx+1<<"\n";
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