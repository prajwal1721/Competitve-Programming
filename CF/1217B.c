#include<stdio.h>
int G=10;
int main()
{
    long long int p,h,n,f=0;
    scanf("%lld",&n);
    while(n--)
    {
        scanf('%lld%lld',&h,&p);
        while(h)
        {
            h-=p;
            if(h==0)
            {
                f=1;goto l;
            }
            h+=G;
        }
    }
}