#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    ll cn,n,t;cin>>n;cn=n;
    vector<ll> v;
    while (cn--)    
    {
        cin>>t;v.push_back(t);
    }
    sort(v.begin(),v.end());
    ll a=*v.rbegin(),b=1;
    for(auto i=1;i<n;i++)
    {
        if(a%(v[i])!=0 || v[i-1]==v[i] ){b=v[i];}
    }
    cout<<a<<" "<<b<<"\n";
}
