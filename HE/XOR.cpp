#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    typedef long long ll;
    while(q--)
    {
        ll  a,b,mod=1000000007;
        cin>>a>>b;
        ll p=a,pre=a,orr=a,pre_or=a,pre_res=1,res=a ;
        for(ll i=a+1; i<b;i++)
        {
            p+=p^i;
            orr=orr|i;
            res=res+orr;
        }
        cout<<res%mod+p%mod<<"\n";
    }
}