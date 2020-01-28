#include<iostream>
using namespace std;
int main()
{
    typedef long long ll;
    ll q;
    cin>>q;
    while(q--)
    {
        ll ans=1,i=0,n,a,b;
        cin>>n;
        while(i++<n)
            cin>>a>>b; 
        i=2;
        while(i<=n)
            ans=ans^i++;
        cout<<ans<<"\n";
    }
}