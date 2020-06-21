// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b))
#define bits(x) __builtin_popcountll(x)
#define vi              vector<int>
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())



typedef long long int ll;
ll dp[10000]={0};
ll fib[10000]={0};
void SoE()
{
    dp[1]=1;
    for(int i=2;i<=10000;i++)
    {
        if(dp[i]==0)
        {
            // cout<<i<<" ";
            for(int j=2;j*i<=10000;j++)
                dp[j*i]=1;
        }
    }
}
void solve()
{
    ll l,r;cin>>l>>r;
    vector<ll> v;
    for(int i=l;i<=r;i++)
    {
        if(!dp[i]){
            // cout<<i<<" ";
            v.push_back(i);
        }
    }
    // cout<<"\n";
    vector<ll> s;
    ll mx=0,mn=INT64_MAX,cnt=0;
    for(ll i=0;i<(ll)v.size();i++)
    {
        // cout<<v[i]<<":";
        for(ll j=i+1;j<(ll)v.size();j++)
        {
            // cout<<v[j]<<" ";
            ll p=(ll)stoi(to_string(v[i])+to_string(v[j]));
            // cout<<p<<" ";
            if(!dp[p])
            {
                s.push_back(p);
                // cout</<v[i]*100+v[j]<<" ";
                mx=max(mx,p);
                mn=min(mn,p);
                cnt++;
                // cout<<p<<" ";
            }
            p=(ll)stoi(to_string(v[j])+to_string(v[i]));
            if(!dp[p])
            {
                // cout</<v[i]*100+v[j]<<" ";
                s.push_back(p);
                mx=max(mx,p);
                mn=min(mn,p);
                cnt++;
                // cout<<p<<" ";
            }
        }
        // cout<<"\n";
    }
    // cout<<" "<<s.size()<<" ";
    set<ll> temp(s.begin(),s.end());
    cnt=temp.size();
    s.clear();temp.clear();
    // now fib
    fib[0]=mn;fib[1]=mx;
    // cout<<mx<<" "<<mn<<"\n";
    for(int i=2;i<cnt;i++)
        fib[i]=fib[i-1]+fib[i-2];
    cout<<fib[cnt-1]<<"\n";
}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    SoE();
    // ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    // while(t--)
        {
            solve();
        }


    return 0;
}