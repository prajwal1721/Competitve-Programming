// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b))
#define bits(x) __builtin_popcountll(x)
#define vi vector<int>
#define vl vector<ll>
#define vp vector<pair<ll,ll>>
#define all(v)          v.begin(),v.end()
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())



typedef long long int ll;
vl v1,v2;
ll ans=0,n,k;
void call(ll i,ll val)
{
    for(ll p=v1[i];p<=v2[i];p++)
    {
        if(i==k-1 && val+p==n)ans++;
        else if(val+p<n)call(i+1,val+p);
    }
}
void solve()
{
    cin>>k>>n;
    while(n!=0)
    {
        ll t1,t2;
        for(int i=0;i<k;i++){cin>>t1>>t2;v1.push_back(t1);v2.push_back(t2);}
        call(0,0);
        cout<<ans<<"\n";
        cin>>k>>n;
    }
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