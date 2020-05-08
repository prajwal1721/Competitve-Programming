// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
1
158 1547 6 455812215544

*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)
typedef long long int ll;

ll x,y,l,r,no,mx=0,cnt=0;
map<ll,ll>mp;
void call(ll ans)
{
    stack<ll> st;st.push(ans);
    while(!st.empty())
    {
        ans=st.top();st.pop();
        for(int i=no;i>=0;i--)
        {
            ll cur=(1<<i);
            ll t=ans;
            if((cur&x)==cur || (y&cur)==cur)t=ans|cur;
            // cout<<t<<"=";
            if(t<=r && mp.find(t)==mp.end())
                {
                    mx=max(mx,t);
                    mp[t]=1;
                    // cout<<"call: "<<t<<":\n";cnt++;
                    st.push(t);
                }
            else if(mp[t]==0)mp[t]=1;
        }
    }
}
void solve()
{
    mp.clear();
    cin>>x>>y>>l>>r;
    ll ans=0;no=ceil(log2(r));
    for(int i=no;i>=0;i--)
    {
        ll cur=(1<<i);
        if(((cur&x)==cur && (y&cur)==cur) && (ans|cur)<=r)
            {ans=ans|cur;}
    }
    // cout<<ans<<" ";
    mx=l;
    call(ans);
    mp[ans]=1;
    // cout<<cnt<<":::::";
    cout<<mx<<"\n";

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