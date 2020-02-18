#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    ll n,t,sum=0;
    cin>>n;
    vector<ll >v;
    while (n--)
    {
        cin>>t; v.push_back(t);
        sum+=t;
    }
    // cout<<sum<<"\n";
    ll m;
    m=*max_element(v.begin(),v.end());
    cout<<((sum%2)?"NO\n":((sum-m)>=m)?"YES\n":"NO\n");    
}