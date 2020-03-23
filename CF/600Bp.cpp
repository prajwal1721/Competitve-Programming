-#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll t,n1,n2;
    vector<ll>v1,v2;
    cin>>n1>>n2;
    ll i=1;
    while(n1--)
    {   
        cin>>t;
        v1.push_back(t);
    }
    i=0;
    while(n2--)
    {   
        cin>>t;
        v2.push_back(t);
    }
    sort(v1.begin(),v1.end());
    for(auto ip=v2.begin();ip<v2.end();ip++)
    {
        auto l=upper_bound(v1.begin(),v1.end(),*ip);
        cout<<l-v1.begin()<<" ";
    }
    cout<<"\n";
}