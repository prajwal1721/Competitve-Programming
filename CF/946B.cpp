#include<iostream>
using namespace std;
#define SWAP(x,y,t) t=x,x=y,y=t
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    typedef unsigned long long ll;
    ll a,b,t;
    cin>>a>>b;
    while(a!=0 && b!=0 && a*2<=b || b*2<=a  )
    {
        if(a==0 || b==0)break;
        if(a*2<=b)
        b=b%(a*2);
        else
        a=a%(b*2);
    }
    cout<<a<<" "<<b<<"\n";
}
