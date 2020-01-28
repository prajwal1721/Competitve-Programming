#include<iostream>
using namespace std;
int main()
{
    typedef long long  ll;
    ll i=1,chest=0,back=0,biceps=0,t,n;
    cin>>n;
    while( i<=n)
    {
        if(i<=n)
        {cin>>t;chest+=t;i++;}
        if(i<=n)
        {cin>>t;biceps+=t;i++;}
        if(i<=n)
        {cin>>t;back+=t;i++;}
    // cout<<chest<<" "<<biceps<<" "<<back<<" "<<i ;
    }
    cout<<((chest>biceps&& chest>back)?"chest\n":(biceps>chest &&biceps>back)?"biceps\n":"back\n");
}