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
#define l 10000000000

typedef  long long int ll;
vector<ll> a;
ll st,ed;
void uni()
{
        ll cur=1,p=0;
    while(cur<l)
    {
        cur=(p*(3*p+1))/2;
        a.push_back(cur);
        p++;
    }
    st=0,ed =a.size()-1;
    // cout<<ed1<<" "<<st1<<"\n";

}
int search(ll nn)
{
    ll st1=st,ed1=ed;
    ll ans=0;
    // cout<<ed1<<" "<<st1<<"\n";
    while(st1<=ed1)
    {
        ll m=(st1+ed1)/2;
        if(a[m]==nn)return nn;
        if(a[m]>nn)
            ed1=m-1;
        else
        {
            st1=m+1;
            ans=max(ans,m);
        }
        // cout<<m<<" "<<a[m]<<"\n";
    }
    return ans;
}
void solve()
{
    ll n;cin>>n;
    ll ans=0;
    while(n>=2)
    {
        ans++;
        // cout<<n<<"::::";
	    auto  it=search(n);
        if(it<=0 || it>=a.size() ) break;
        // if(a[it]!=n)it--;
        // cout<<it<<"\n";
        n-=a[it];
    }
    cout<<ans<<"\n";
}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;cin>>t;
    uni();
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            solve();
        }


    return 0;
}
