#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;
int main()
{
    ll a,b,t;cin>>a>>b;
    ll type1=0,type2=0,ans=0;
    if(a>b){t=a;a=b;b=t;}
    for(ll i=0;i<=a;i++)
    {
        type1=min(i/2,min(i,b));
        type2=min((a-type1*2),(b-type1)/2);
        ans=max(ans,type1+type2);
    }
    cout<<ans<<"\n";
}