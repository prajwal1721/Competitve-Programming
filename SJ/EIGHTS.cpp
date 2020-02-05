#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    typedef unsigned long long ll;
    ll q;cin>>q;
    while(q--)
    {
        ll n;
        cin>>n;
        cout<<192+(n-1)*250<<"\n";
    }
}