#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        if(i%4==1 || i%4==2)cout<<'a';
        else if(i%4==3 || i%4==0)cout<<'b';
    }
    cout<<'\n';

}