#include<iostream>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll ans=0,n,t,k;cin>>n>>k;ll cn=n;
    vector<ll> v,time,lp;
    while(n--)
    {
        cin>>t;v.push_back(t);
    }
    ll i=0;
    n=cn;
    while(n--)
    {
        cin>>t;
        time.push_back(t);
        if(t==1)ans+=v[i];
        if(t==0)lp.push_back(i);
        i++;
    }    
    ll m=0,count=0;
    auto j=lp.begin();
    if(lp.size())
    for(i=((lp.size())?(*lp.begin()):cn+k-1);i<cn;i++)
    {
        if(count>=k){m=max(m,t);if(t>0)t-=v[(*j)++];count=i-*j;}
        if(t<0)t=0;
        if(time[i]==0)
        {
            t+=v[i];
            m=max(m,t);
        }
        count++;
        // cout<<t<<" "<<m<<" "<<*j<<"\n";
    }
    cout<<m+ans<<"\n";
}