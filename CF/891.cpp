#include<iostream>
#include <bits/stdc++.h> 
#include<cmath>
#define SWAP(x,y,t) t=x,x=y,y=t
using namespace std;
int main()
{
    typedef long long ll;
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    ll i,count=0,t,no=0;
    sort(a,a+n);
    for(int j=0;j<n;j++)
        for(i=0;i<n;i++)
        {
            if(a[i]!=a[i+1])
            {
                t=__gcd(a[i],a[i+1]);
                if(t==1 && a[i]!=1)
                    { a[i]=t;no++;}
                else if( 1!=a[i+1])
                {
                    a[i+1]=t;
                    no++;
                }
            }
            for(int k=0;k<n;k++)
                cout<<a[k]<<" ";
            cout<<":: "<<n<<"\n";
        }
    ll p=0;
    for(int j=0;j<n;j++)
        if(a[i]==1)p++;
    if(p==n)
    cout<<no<<":: "<<p;
    else cout<<-1;
}
