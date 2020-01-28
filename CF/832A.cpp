#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    ll n,k;
    cin>>n>>k;
    cout<<((n%(2*k)>=k)?"YES\n":"NO\n");
}