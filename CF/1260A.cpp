#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int main()
{
    ll n;cin>>n;
    while (n--)
    {
        ll a,b;cin>>a>>b;
        if(a>=b)cout<<b<<"\n";
        else
            cout<<ceil((float)b/a)+b-(ceil((float)b/a))*a<<"\n";
    }
    
}