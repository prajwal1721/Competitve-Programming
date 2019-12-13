#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    ll a[3],s1,s2,s3;
    ll t;
    cin>>t;
    while(t--)
    {

        cin>>a[0]>>a[1]>>a[2];
        
        sort(a,a+3);
        s1=abs(a[0]-a[1]);
        s2=abs(a[2]-a[1]);
        s3=abs(a[0]-a[2]);
        if(a[1]==(a[2]+a[0])/2)
        {
            s1--;
            s2-=2;
            s3--;
        }
        else if(s1>s2)
        {
            s1-=2;
            s3-=2;
        }
        else
        {
            s2-=2;
            s3-=2;
        }
        ll p=s1+s2+s3;
        if(p<0) p=0;
        cout<<p<<"\n";
    }
}