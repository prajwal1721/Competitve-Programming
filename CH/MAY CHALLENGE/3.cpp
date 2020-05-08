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
    ll n,t,k;cin>>n>>k;
    ll cur=0;
    bool vis[n+1]={false};
    vector<tuple<ll,ll,ll>> ans;
    vector<ll> v;v.push_back(0);
    for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
    v.push_back(0);
    ll c1,c2,c3;
    ll t1=2;
    vector<pair<ll,ll>> pr;
    for(ll i=0;i<n;i++)
    {
        ll c1,c2,c3;
        if(v[i]!=i)
        {
            c1=i;
            c2=v[i];
            int flag=0;
            if(v[v[i]]!=c1)
            {
                c3=v[v[i]];
                ans.push_back({c1,c2,c3});
                ll temp=v[c3];
                v[c3]=v[c2];
                v[c2]=v[c1];
                v[c1]=temp;
                flag=1;
            }
            else
            {
                if(vis[c1]==false && vis[c2]==false)
                pr.push_back({c1,c2});
                vis[c1]=true;
                vis[c2]=true;
            }
            if(flag==1)
            {
               if(v[i]!=i)i--; 
            }
           // cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }

    if(pr.size()%2!=0)cout<<"-1"<<"\n";
    else
    {
        ll i=0,j=0;
        for(i=0,j=1;i<pr.size() && j<pr.size();)
        {
            ans.push_back({pr[j].first,pr[i].second,pr[i].first});
            ans.push_back({pr[j].second,pr[j].first,pr[i].second});
            i+=2;j+=2;
        }
        if(ans.size()>k)cout<<"-1"<<"\n";
        else{
        cout<<ans.size()<<"\n";
        for(int i=0;i<ans.size();i++)
        {
            tie(c1,c2,c3)=ans[i];
            cout<<c1<<" "<<c2<<" "<<c3<<"\n";
        }
        }
    }


}
int main()
{ 
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            solve();
        }


    return 0;
}