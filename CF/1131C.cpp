#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll t,cn,n;cin>>n;cn=n;
    vector<ll> v;
    while (n--)
    {   
        cin>>t; v.push_back(t);
    }
    sort(v.begin(),v.end(),greater<ll >());
    string ans="";
    for(ll i=0;i<v.size();i++)
    {
        ans=ans+to_string(v[i])+" ";
        if(i<v.size()-1)
        ans=to_string(v[++i])+" "+ans;
        // cout<<ans<<"==";
    }
    cout<<ans<<"\n";
}