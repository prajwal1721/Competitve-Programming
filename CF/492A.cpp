#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll ans=0,i=0;
    while(ans<=n)
    {
        i++;
        ans+=(i*(i+1))/2;
    }
    cout<<--i<<'\n';
}