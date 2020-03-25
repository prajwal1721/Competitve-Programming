#include<bits/stdc++.h>
using  namespace std;
typedef long long ll;
int main()
{
    ll i=0,n;cin>>n;
    ll a[n];
    while (i<n)
    {
        cin>>a[i];i++;
    }
    for(ll i=1;i<n;i++)
    {
        ll j=i-1,key=a[i];
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        for(ll k=0;k<n;k++)
            cout<<a[k]<<" ";
        cout<<"\n";
    }
}
