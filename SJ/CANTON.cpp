#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;ll t; cin>>t;
    while(t--)
    {
        ll p;cin>>p;
        ll n=floor((float)(-1+sqrt(8*p+1))/2);
        
        ll sum=n+2;
        cout<<"TERM "<<p<<" IS ";
        p-=n*(n+1)/2;
        if(p==0)
        {
            if(! (n&1)) cout<<n<<"/"<<1<<"\n";
            else cout<<1<<"/"<<n<<"\n";
        }
        else if((n+1)&1)
        cout<<sum-p<<"/"<<p<<"\n";
        else
        cout<<p<<"/"<<sum-p<<"\n";

    }
}
