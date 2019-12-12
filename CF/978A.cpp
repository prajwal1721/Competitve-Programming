#include<iostream>
#include <bits/stdc++.h>
#include<array>
 void sortbyColumn(int *arr, int col) ;
using namespace std;
int main()
{
    typedef long long  ll;
    ll a[1001],t,n;
    cin>>n;
    for(int i=1;i<=1000;i++)
        a[i]=0;
    ll b[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        a[b[i]]=i;
    }
    // for(int i=1;i<=n;i++)
        // cout<<b[i]<<' '<<a[b[i]]<<'\n';
    ll c=0;
    for(int i=1;i<=1000;i++)
        if(a[i]) c++;
    cout<<c<<'\n';
    for(int i=1;i<=n;i++)
        {
            if(i==a[b[i]])
            {
                cout<<b[i]<<" ";
            }
        }
        cout<<"\n";
}
