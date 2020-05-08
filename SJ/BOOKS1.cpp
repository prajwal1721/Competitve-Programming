// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)/* condition */
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;
ll n,k;
ll check(vector<ll> v,ll m)
{
    ll cnt=0,pre=v[0],dif=m;
    // cout<<dif<<"==";
    for(ll i=1;i<=n;i++)
    {
        if(v[i]-pre>=dif)
        {
            cnt++;
            // cout<<v[i]<<" ";
            pre=v[i];
            if(cnt==k)return 1;
        }
    }
    return 0;
}
ll bs(vector<ll> v)
{
    ll st=1,ed=n;
    while (st<ed)
    {
        // cout<<st<<" "<<ed<<"\n";
        ll m=(st+ed)/2;
        // cout<<v[m]<<"--";
        if(check(v,v[m])==1)
            {st=m+1;}
        else 
            ed=m; 
        if(ed-st==1)break;
    }
    // cout<<st<<" ";
    return v[st];
}
void solve()
{
    ll t;cin>>n>>k;
    vector<ll> v;v.push_back(0);
    for(ll i=0;i<n;i++)
    {cin>>t;v.push_back(t);}
    sort(v.begin(),v.end());
    for(ll i=1;i<=n;i++)
    {
        v[i]+=v[i-1];
    }
    ll cur=v[0],m=bs(v);cout<<m<<"==";
    ll p=1;
    ll cur_s=0;
    for(ll i=1;i<=n;i++)
    {
        cout<<v[i]-v[i-1]<<" ";
        // cout<<"--"<<v[i]-cur<<"==\n";`   
        if(v[i]-cur>=m && p<k){cout<<" / ";cur=v[i];p++;}
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