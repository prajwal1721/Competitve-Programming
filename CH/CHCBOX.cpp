#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll q;cin>>q;
    while(q--)
    {
        ll n;cin>>n;
        ll mx=0,a[n],i=0,flag=1,pos=n+1;
        while (i<n)
        {
            cin>>a[i];if(mx<a[i])
            {mx=a[i];
            }
            i++;
        }
        ll mx_cnt=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==mx){pos=i;mx_cnt++;}
        }
        ll cnt=0;
        ll f=1;
        ll c=0;
        // cout<<cnt<<"n";
        if(pos!=n+1 && mx_cnt!=n)
        {
        for( i=pos+1;i!=pos;)
        {
            f=1;
            ll j=0;
            for(;j<n/2;j++)
            {
                if(i==pos){f=0;break;}
                if(a[i]==mx){f=0;i=(i+1)%n;break;}i=(i+1)%n;
            }
            if(f)cnt++;
            if(f && i!=pos)
            {
                // cnt++;
                while (f && i!=pos)
                {
                    if(a[i]==mx){f=0;break;}
                    cnt++;
                    i=(i+1)%n;
                }
            }
        }
        }
        else cnt=n;
        cout<<cnt<<"\n";
    }
}
