#include<iostream>
#define SWAP(x,y,t) t=x,x=y,y=t
using namespace std;
int main()
{
    typedef long long ll;
    ll q;
    cin>>q;
    while(q--)
    {
        ll m,b,p=2;
        cin>>m>>b;
        if(m<b)SWAP(m,b,p);
        if(b==0)cout<<(m)<<"\n";
        else if(m%b==0)cout<<(2*b)<<"\n";
        else cout<<2<<"\n";
    }
}