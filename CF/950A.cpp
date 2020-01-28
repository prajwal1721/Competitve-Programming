#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    ll l,r,b,t,ans;
    cin>>l>>r>>b;
    if(l<r) {t=l;l=r;r=t;}
    if(abs(l-r)<b)
        {
            ans=2*l+2*(int)((b-l+r)/2);
            cout<<ans<<"\n";
        }
    else
        cout<<2*r+(b*2)<<'\n';
}