#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    ll sum=0,n,t;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];  
    }
    ll ans;
    sort(a,a+n);
    if(n>2)
        if(a[n-2]-a[0]>=a[n-1]-a[1]&& (a[0]!=a[1]))
            ans=a[n-1]-a[1];
        else ans=a[n-2]-a[0];
    else
        ans =0;
    cout<<ans<<"\n";

}