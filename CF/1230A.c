
#include<stdio.h>

#define SWAP(x,y,t) t=x,x=y,y=t
int main()
{
    long int a[5],s1=0,s2=0,n=4,t;
    for(int i=0;i<4;i++)
        scanf("%ld",&a[i]);
    for(int i=0;i<n-1;i++) 
        for(int j=0;j<n-1;j++)  
            {
                if(a[j]>a[j+1])
                SWAP(a[j],a[j+1],t);
            }
    for(int i=1;i<n;i++) 
            {
                s1=0;s2=0;
                for(int j=0;j<i;j++)
                {   s1+=a[j];
                }
                for(int j=i;j<n;j++)
                {
                    s2+=a[j];

                }
                if(s1==s2)
                   { printf("YES");return 0;}

            }
    if(a[1]+a[2]==a[0]+a[3])
                   { printf("YES");return 0;}
    printf("NO");
}


/*SMART LOGIC
abs(a[1]+a[2]-a[3])==a[0]
*/