#include<stdio.h>
using namespace std;
int main()
{
    int c=0;
    long int n;
    scanf("%ld",&n);
    while(n!=1)
    {
        if(n&1)
                printf("n:%ld-1=%ld\n",n--,n-1);
        else
            {
                printf(":n:%ld/2=%ld\n",n,n/2);
                n/=2;
            }
        c++;
    }
    printf("::::%d\n",c);
}