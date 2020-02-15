#include<iostream>
using namespace std;
#include<algorithm>
int  main()
{
    typedef long long ll;
    ll q;cin>>q;
    while(q--)
    {
        ll c,d,l;
        cin>>c>>d>>l;
        ll l_min=d*4+max((ll)0,(c-d*2)*4),l_max=(c+d)*4;
        if(l%4==0 && l_min<=l && l_max>=l)cout<<"yes\n";
        else cout<<"no\n";
    }
}