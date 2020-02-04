#include<iostream>
#include<cmath>
using namespace std;
#define modq(x) x%1000007
int main()
{
    typedef long long ll;
    ll nn;
    cin>>nn;
    while(nn--)
    {
        ll n;cin>>n;
        cout<<modq(3*((n)*(n+1)/2)-n)<<"\n";
    }
}

/*
#include<stdio.h>
int main(){
    long long int t,cards,l,x,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++){
        scanf("%lld",&l);
        x=(l*(l+1))/2-l;
        cards=(3*x+2*l)%1000007;
        printf("%lld\n",cards);
    }
 return 0;
}
*/