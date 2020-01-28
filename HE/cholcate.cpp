// https://www.hackerearth.com/challenges/competitive/january-circuits-20/algorithm/distribute-chocolates-70c2c2ab
#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,c;
        cin>>c>>n;
        ll a=c-(n*(n-1))/2;a=(ll)a/n;
        if(a>0)
        cout<<c-n*a-(n*(n-1))/2<<"\n";
        else 
        cout<<c<<"\n";  
    }
}