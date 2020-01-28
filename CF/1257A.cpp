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
    ll n,x,a,b,t;
    cin>>n>>x>>a>>b;
    cout<<(((abs(a-b)+x)<n)?(abs(b-a)+x):n-1)<<"\n";    
    }
}