#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;cin>>q;
    while (q--)
    {
        ll a,b;cin>>a>>b;
        if((b-a)>0 && (b-a)%2 || (b-a)<0 && (b-a)%2==0)
            cout<<1<<"\n";
        else if((b-a)<0 && (b-a)%2 || (b-a)>0 && (b-a)%2==0)
            cout<<2<<"\n";
        else
            cout<<0<<"\n";
    }
    
}