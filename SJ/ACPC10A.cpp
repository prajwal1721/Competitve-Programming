#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    ll a,b,c;
    cin>>a>>b>>c;
    while(a||b||c)
    {
        ll c1=b-a,c2=c-b;
        if(c1==c2)
        {
            cout<<"AP "<<a+3*c1<<"\n";
        }
        else
        {
            cout<<"GP "<<a*(b/a)*(c/a)<<"\n";
        }
    cin>>a>>b>>c;
    }
}