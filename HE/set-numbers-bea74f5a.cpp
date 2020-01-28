#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;
    cin>>q;
    while(q--)
    {
        ll n;
        cin>>n;
        cout<<pow(2,(ll)(log2(n)))-1<<"\n";
    }
}