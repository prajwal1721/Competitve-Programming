#include<stdio.h>
typedef struct 
{
    int i,j,p;
}dat;
dat d;
void data(int i,int j,int p);
int main()
{
    int q,y=0,g=1;
    long int t1,t2;
    scanf("%d",&q);
    int a[2][1000000];
    while(q--)
    {

        int n;
        scanf("%d",&n);
        scanf("%ld",&t1);
        scanf("%ld",&t2);
        for(int i=n-1;i>=0;i--)
        {
            int t=t1%10;
            a[0][i]=t;
            t1/=10;
            // printf("%d ",a[0][i]);
        }

        for(int i=n-1;i>=0;i--)
        {
            int t=t2%10;
            a[1][i]=t;
            t2/=10;
        }
        // printf("ee\n");
        int k=0,l=0,p=1;
        while(1)
        {
            if(a[k][l]==1 ||a[k][l]==2)
              {
            if(k==1 && l==n-1) goto l;
                l++;g=1;data(k,l-1,1);
              }
            else if(a[k][l]==3||a[k][l]==4||a[k][l]==5||a[k][l]==6)
                if(k==0){k=1;data(0,l,0);}
                else {
            if(k==1 && l==n-1 ) goto l;
               if(y++%2==0) {l++;data(k,l-1,1);}
               else {k=0;l++;data(1,l,0);}
                }
            else
            {
                p=0;goto l;
            }
            if(l>=n ||  k>1) {p=0;goto l;}
        }       
        l:
        if(p )
        if(d.p==0  && (a[1][n-1]!=4||a[1][n-1]!=5||a[1][n-1]!=6||a[1][n-1]!=3))
        printf ("YES\n");
        else printf("NO\n");            
        else printf("NO\n");    
    }
}
void data(int i,int j,int p)
{
    d.i=i;d.j=j;d.p=p;
}