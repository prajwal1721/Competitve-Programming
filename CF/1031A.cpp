#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;
int  main()
{
    ll ans=0 , m,n,k;
    cin>>m>>n>>k;
    while(k-- && m&&n)
    {
        ans+=2*(m+n)-4;
        m-=4;
        n-=4;
    }
    cout<<ans<<"\n";

}