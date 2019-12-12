#include<stdio.h>
int main()
{
    int q;
            scanf("%d",&q);
    while(q--)
    {
        int min,t=1;
        int m,n,a[10000],b[10000],count=0,check=0;
            scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        min=a[0];count++;
        for(int i=1;i<=5 && i<n;i++)
            if(a[i]<min)
                //     printf("%d::",a[i]);
                {min=a[i];count++;}
        for(int j=6;j<n;j++)
            if(a[j-1]>a[j]&&a[j-2]>a[j] &&a[j-3]>a[j]&& a[j-4]>a[j] && a[j-5]>a[j] )
              {  count++;
                    // printf("%d::",a[j]);
              }
        printf("%d\n",count);
    }
}