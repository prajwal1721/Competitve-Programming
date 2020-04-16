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
    
}
int main()
{
    ll q;cin>>q;
    while (q--)
    {
        ans();
    }
}
    
