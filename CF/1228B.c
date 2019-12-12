#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int* check(int aa,int a[],int *p,int *r,int *c);
int* c1(int a[],int *r,int *c);
long long int comt=0,m,n,co=0;
int main()
{
    int *p,*q, row[10000],col[10000],r_n[10000]={0},r_p[10000]={0},ep=0;
    scanf("%lld%lld",&m,&n);
    for (int i = 0; i <m ; i++)
        scanf("%d",&row[i]);
    for (int i = 0; i <n ; i++)
        scanf("%d",&col[i]);
    q=c1(r_n,row,col);
    // printf("pass1 %ld",co);
    for(int j=1;j<m;j++)
    {
       q= check(j,r_n,q,row,col);
    // printf("pass%d %ld",j,co);    
    }
    co=pow(2,co);
    // co%=1000000007;
    printf("%lld",co);
}
int* check(int aa,int a[],int *p,int *r,int *c)
{
    int d=0;
    //  for(int k=0;k<n;k++)
    //  {
    //      a[k]=0;
    // }
    for(int j=0;r[aa];j++)
    {
            a[d++]=1;r[aa]--;
    }
    if(r[aa]==0 && d<m)
    {
        a[d]=0;
    }
    d=1;
    for(int j=1;j<n;j++)
    {
        if(a[j]==1 && c[j]!=0) c[j]--;
        else if(c[j]==0 && r[aa]==0) {a[j]=0;r[aa]--;}
        else if(c[j]==0){a[j]=-1;co++;}
    }
    return a;
}
int* c1(int a[],int *r,int *c)
{
    int d=0;
    for(int i=0;i<r[0];i++)
    {
        a[d++]=1;
    }    
    d=1;
    if(c[0]!=0^r[0]!=0){comt=1;printf("%d",0);exit (0);}
    for(int i=1;i<n &&d<n;i++)
    {
        if(a[d]==1 && c[i]!=0 )
                c[i]--;        
        else if(a[d]==0 && c[i]!=0)
        {
            c[i]--;a[d]=1;
        }          
        else if(c[i]==0)
        {
            a[d]=0; 
        }
        d++;
    }
    return a;
}   