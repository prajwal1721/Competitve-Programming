#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;
    cin>>n;
    while(n--)
    {
        ll t;
        cin>>t;
        if(t<=1)cout<<"NO\n";
        else if(t==4 || t==9)cout<<"YES\n";
        else if(ceil(sqrt(t))==floor(sqrt(t)))
        {
            ll f=1;
            t=sqrt(t);
            if(t%2==0 || t%3==0){f=-1;}
            else 
            for(ll i=5;i*i<=t;i+=6)
            {
                if(t%i==0 || t%(i+2)==0){f=-1;break;}
            }
            if(f==1)cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
}