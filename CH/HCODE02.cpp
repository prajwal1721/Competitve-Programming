#include<iostream>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;cin>>n;
    ll count=0,t;
    while(n--)
    {
        cin>>t;if(t>=2)count++;
    }
    if(count%2)cout<<1<<"\n";
    else cout<<2<<"\n";
}
