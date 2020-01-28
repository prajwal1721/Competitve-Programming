#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    ll t;
    vector<ll> v;
    ll max=-1,n=4;
    while(n--)
    {
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    for(auto i=v.begin();i<--v.end();i++)
    {
        // cout<<max<<" "<<*i<<"\n";
        cout<<*(--v.end())-*i<<" ";
    }
    cout<<"\n";
}