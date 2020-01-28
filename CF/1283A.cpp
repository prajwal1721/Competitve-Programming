#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;
    cin>>n;
    while (n--)
    {
        ll h,m;
        cin>>h>>m;
        cout<<(abs(++h-24)*60+60-m)<<"\n";
        /* code */
    }
    
}