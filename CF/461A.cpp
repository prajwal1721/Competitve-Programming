#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
    vector<ll> v;
    ll sum=0;
    ll n,cn,t;cin>>n;cn=n;
    while (n--)
    {
        cin>>t;v.push_back(t);sum+=t;
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<cn;i++)
    {
        // cout<<v[i]<<" ";
        sum+=v[i]*(i+1);
    }
    sum-=*v.rbegin();
    cout<<sum<<"\n";
}