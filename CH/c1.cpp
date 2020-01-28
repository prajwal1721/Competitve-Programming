#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int check(ll n);
int dig(ll no,ll n);
int main()
{
    ll n,no;
    for(n=1;n<=8;n++)
    {
    for(ll i=2;i<n && n>0;i+=2)
    {
        no=i*pow(10,n-1);
        for(ll i1=2;i1<=pow(10,n-1)-1;i1++)
        {
            no+=i1;
            if(no<pow(10,n))
            if(check(no))
                {
                    if(dig(no,n))
                    cout<<no<<" ";}
        }
    }cout<<"--------------\nno:::"<<n+1<<"\n";
    }
}
int check(ll n)
{
        for(ll i1=2;i1<n;i1++)
        {
            if(n%i1==0)
                    return 0;
        }
    return 1;
}
int dig(ll no,ll n)
{
    no=no%((ll)pow(10,n));
    while(no && n)
    {
        if(n--%2==0)
        {
            if((no%(ll)pow(10,n))%2==0)
                return 0;
        }
        no=no%10;
    }
    return 1;
}