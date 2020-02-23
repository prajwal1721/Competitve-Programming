#include<iostream>
#include<cmath>
#include<vector>
#include<tuple>
using namespace std     ;
typedef long long ll;
void ans()
{
    ll n,t;cin>>n>>t;
    vector<tuple<ll,ll,ll>>v;
    ll time,l,u;
    while (n--)
    {
        cin>>time>>l>>u;
        v.push_back({time,l,u});
    }
    ll q,f=1,lower,upper,pre_low=t,pre_up=t,curr_time=0;
    for(auto i=v.begin();i!=v.end();i++)
    {`
        tie(q,lower,upper)=i;
        if(lower>=pre_low && upper>=pre_up)
        {
            if(upper<pre_low-time ){f=0;break;}
            pre_low=max(min(pre_low-time,upper),lower);

        }
        else
        {
            
        }
        
    }
}
int main()
{
    ll q;cin>>q;
    while (q--)
    {
        ans();
    }
}
    
