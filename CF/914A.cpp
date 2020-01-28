#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
int main()
{
    ll n,t;
    vector <ll> v;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    auto it=v.begin();
    do
    {
    t=*it;
    it++;
    if(floor(sqrt(t))!=ceil(sqrt(t)))
        break;
    }
    while( it!=v.end());
    cout<<t<<"\n";
}