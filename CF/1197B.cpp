#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    ll t, n;
    vector <ll> v;
    cin>>n;
    int a[150000];
    for( ll i=0;i<n;i++)
    {
        cin>>t;
        v.push_back(t);
    }
    for(ll j=0;j<n;j++)
    {
        auto it=max(v.begin(),v.end());
        for( auto i=v.begin();i<v.end();i++)
            if(*i==*it && *(i+1)==*it-1)
            {
                *i=
            }
            if(*i==*it && *(i+1)==*it-1)
            {

            }
    }
}
