#include<stdio.h>
int  main()
{
    int q;
    scanf("%d",&q);
    while (q--)
    {
        long int a,b;
        scanf("%ld%ld",&a,&b);
        long int n=a-b;
        if(n>1) printf("YES\n");
        else
        printf("NO\n");
    }
}
