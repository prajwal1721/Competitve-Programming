#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
    ll c[10];
    ll s,e,count=0;
    ll t,o;
    cin>>t;
    while(t--)
    {
        count=0;
    cin>>s>>e;
    for(ll i=s;i<=e;i++)
    {
        for(ll i=1;i<10;i++)
        {
            c[i]=0;
        }
        ll p=i,f=0;
        // cout<<i<<" :: ";
        while(p)
        {
            ll r=p%10;
            if(!c[r] )
            {
                if(i%r)
                    {
                        f=1;
                        break;
                    }
            }
            p=p/10;
        }
            if(!f) count++;
        // cout<<'\n';
    }
    cout<<count<<'\n';
    }
}