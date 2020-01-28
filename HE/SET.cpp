#include<iostream>
using namespace std;
    typedef long long ll;

int main()
{
    int n;
    ll aa[106],ab[106],abs[106];
    cin>>n;int j=0;
    aa[1]=1;ab[1]=0^1;
    for(int i=2;i<=106;i++)
    {
        aa[i]=aa[i-1]^i;
        ab[i]=0^i;
        abs[i]=ab[i]+abs[i-1];
        // cout<<i<<":"<<aa[i]<<"\n";
    }
    
    while(n--)
    {
        ll  a,b,mod=1000000007;
        cin>>a>>b;a++;
        ll x=(a^(aa[b-a+1]+(((b-a)*(b-a+1))/2))^0);
        cout<<x<<"\n";
        ll l=((b-a+1)*a)+(a|(((b-a)*(b-a+1))/2));
        cout<<l<<"\n";
    }
}