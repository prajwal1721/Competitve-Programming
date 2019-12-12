#include<stdio.h>
void disp();
long int end=0,start=0, a[1000000];
int main()
{
    long int aa;
    long int n,k,f;
    scanf("%ld%ld",&n,&k);
    for(int i=0;i<n;i++)
        {
            f=1;
            scanf("%ld",&aa);
            for(int j=start;j<end;j++)
            {
                if(aa==a[j]) {f=0;break;}
            }
        if(f && start+k>end){a[end++]=aa;}
        else if(f){a[end++]=aa;start++;}
        }
        if(end-start<k) printf("%ld\n",end-start);
        else printf("%ld\n",k);
        disp();
}
void disp()
{
    for(int i=end-1;i>=start;i--)
        printf("%ld ",a[i]);
        printf("\n");
}