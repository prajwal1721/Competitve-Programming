#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
    ll n,time,t;
    cin>>n>>time;
    vector<ll> v;
    for(int i=0;i<n;i++)
    {cin>>t;v.push_back(t);}t=0;
    ll ans=0,st=0;
    for(int i=0;i<n;i++)
    { 
        if(t+v[i]<=time){t+=v[i];}
        else {t+=-v[st]+v[i];st++;}
        ans=max(ans,i-st+1);
    }
    cout<<ans<<"\n";
}