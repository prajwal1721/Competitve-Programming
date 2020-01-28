#include<iostream>
using namespace std;
typedef long long ll;
int isPrime(ll n);

int main()
{
    ll m;
    cin>>m;
    cout<<((m<3)?7:(m-2))<<"\n";
}
int isPrime(ll n)
{
    for(ll i=2;i<n;i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
