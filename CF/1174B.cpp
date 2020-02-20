#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    vector<ll> v;
    ll n,t,cn;cin>>n;cn=n;
    ll o=0,e=0;
    while (cn--)
    {
        cin>>t;v.push_back(t);
        if(t%2==0 )e++;
        if(t%2==1)o++;
    }
    if(o &&e)
    sort(v.begin(),v.end());
    for (auto i = v.begin(); i < v.end(); i++)
        cout<<*i<<" ";
    cout<<"\n";
}
