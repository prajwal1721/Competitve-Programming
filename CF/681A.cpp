#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;
    cin>>n;
    string s;
    ll f=0,before,after,mark=2400;
    while(n--)
    {
        cin>>s>>before>>after;
        if(before>=mark && before<after)
            f=1;
    }   
    if(f==1) cout<<"YES\n";
    else cout<<"NO\n";
}