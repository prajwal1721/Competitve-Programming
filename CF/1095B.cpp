#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    ll sum=0,n,t;
    vector<ll> a;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>t;
        a.push_back(t);
        sum+=t;
    }
    vector<ll>::iterator it; 
  
    it = a.begin();
    ll ans;
    float avg=(float)sum/n;
    cout<<avg;
    if(*max_element(a.begin(), a.end())-avg >= avg-*min_element(a.begin(),a.end()))
    {
        a.pop_back();
    }
    else
    {
        a.erase(it);
    }
        ans=(*a.end())-(*a.begin());
    for(auto it=a.begin();it<a.end();it++)
        cout<<*it;
    cout<<ans<<"\n";

}