#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    ll n,p=0;
    cin>>n;
    if(n%2==0)
    {
        p=n/2;cout<<p<<"\n";while(p--)cout<<"2 ";
    }
    else
    {
        p=1+(n-3)/2;cout<<p<<"\n3 ";while(--p) cout<<"2 ";
    }
    cout<<"\n";
}