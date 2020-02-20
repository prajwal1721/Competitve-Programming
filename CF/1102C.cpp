#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    vector<ll> v;
    ll n,cn,t,my,his;cin>>n>>my>>his;cn=n;
    while (n--)
    {
        // t=10000;
        cin>>t;
         v.push_back(t);
    }
    ll ans=0;
    if(my>his)ans=cn;
    else 
    {
        for(auto i=v.begin();i!=v.end();i++)
        {
         if(*i<=my)ans++;
        }
        ans=ceil((float)ans/2);
    } 

    cout<<ans<<"\n";
}
