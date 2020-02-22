#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
    ll n,cn,t,Min=INT64_MAX,pre_sum=0;cin>>n;cn=n;
    vector<ll>v;
    vector<ll > a;
    a.push_back(0);
    v.push_back(pre_sum);
    while (n--)
    {
        cin>>t;
        pre_sum+=t;
        Min=min(Min,t);
        a.push_back(t);
        v.push_back(pre_sum);
    }
    sort(a.begin(),a.end());
    for(ll i=1;i<=cn;i++)
    {
        a[i]=a[i]+a[i-1];
    }
    cin>>n;
    while (n--)
    {
        ll l,r,type;
        cin>>type>>l>>r;
        if(type==1)
        {
            cout<<v[r]-v[l-1]<<"\n";
        }
        else
        {
            cout<<a[r]-a[l-1]<<"\n";
        }
    }
    
    
}