#include<iostream>
using namespace std;
int main()
{
    typedef long double ll;
    ll q;
    cin>>q;
    while(q--)
    {
        ll  task,time,gf,gap;
        cin>>task>>time>>gf>>gap;
        ll for_gf=((long long)(time/(gap+gf)))*gf;
        cout<<((time-for_gf>0)?time-for_gf:0)<<"\n";
    }
}