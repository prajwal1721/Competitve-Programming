#include<stdio.h>
int main()
{
    int a[6],l[6],u[6],ind=0,p=1000000,n[10]={0};
    int ep[10],c_i=0,low,up,tr;
    scanf("%d%d",&low,&up);
    while(low && ind<6)
    {
        int t=(low%p)*10/(p);a[ind]=l[ind]=t;low%=p;p/=10;
        n[t]++;
        ind++;
    }
    ind=0;p=1000000;
    while(up && ind<6)
    {
        int t=up%p*10/(p);u[ind++]=t;up%=p;p/=10;
    }
    int ll=0,cc=0;
    for(int i=0;i<=9;i++)
        {
        if(n[i]==0)
            {ep[ll++]=i; 
            cc++;
            }
        }
        int ka=1,c2=0;
    for(int i=0;i<=9;i++)
    {
        if(n[i]>=2) 
        {
            tr=i;
            for(int k=0;k<6;k++)
            {
                if(a[k]==tr)
                {
                    while(ka && c2<cc && ep[c2]!=-1)
                    {
                        a[k]=ep[c2++];
                        if(a[k]<=u[k]) {ka=0;ep[c2]==-1;}
                    }
                }
            }
        }

        ka=1;
    }
    int d=0;
    while(a[d++]==0)
    if(d==6)   printf("0");
    else
    {
        for(int i=d;d<6;d++)
        printf("%d",a[i]);
    }
}