#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    typedef long long ll;
    ll n,count=0;cin>>n;
    while(n)
    {
        ll m=0,p=7,a[]={n%10,n/10%10,n/100%10,n/1000%10,n/10000%10,n/100000%10,n/1000000%10};
        for(ll i=0;i<p;i++)if(m<a[i])m=a[i];
        n-=m;
        count++;
    }
    cout<<count<<"\n";
}