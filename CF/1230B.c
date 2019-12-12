#include<stdio.h>
int main()
{
    char cq[220000];
     int n,k,a[1000],i=1;
    scanf("%d%d",&n,&k);
    scanf("%s",cq);
    if(n==1 && k) {printf("0");return 0;}
    if(!k) {printf("%s",cq);return 0;}
    if(cq[0]!='1' && k) {cq[0]='1';k--;}
    while( i<n) {
        if(cq[i]!='0' && k)
        {cq[i]='0';k--;}i++;}
    printf("%s",cq);
}