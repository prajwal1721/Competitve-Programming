#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll m,p,t;cin>>m>>p;
    set<ll> q;
    while(p--)
    {
        cin>>t;q.insert(t);
    }   
    map<ll,ll>ans; 
    for(ll i=0;i<m;i++)
        ans[i]=0;
    ll mx=INT32_MIN;
    auto pp=q.begin();
    while(!q.empty())
    {
        (*ans.begin()).second=(*ans.begin()).second+*pp;
        pp++;
    }
    for(auto it=ans.begin();it!=ans.end();it++)
    {
        mx=(mx,(*it).second);
    }
    cout<<mx<<"\n";
}