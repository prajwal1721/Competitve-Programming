#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int  main()
{
    ll g,n;cin>>n;
    ll a[n][n];
    for(ll ii=0;ii<n;ii++)
    {for(ll i=0;i<n;i++)
    {
        cin>>a[ii][i];
    }
    }
        g=sqrt((a[0][1]*a[0][2])/a[1][2]);
        cout<<g<<" ";
    for(ll i=1;i<n;i++)
    {
        cout<<a[0][i]/g<<" ";
    }
    cout<<"\n";

}