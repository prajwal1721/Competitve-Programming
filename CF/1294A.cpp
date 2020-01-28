#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,a,b,c;
        cin>>a>>b>>c>>n;
        ll m=max(c,max(a,b));
        ll p=3*m-a-b-c;
        n-=p;
        if(n>=0 && n%3==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
}