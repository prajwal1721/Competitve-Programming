#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int q,f=0;
    cin>>q;
    while(q--)
    {
        f=0;
        int n,temp;
        int c[13]={0};
        cin>>n;
        for(int i=0;i<13;i++)
            c[i]=0;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            if(temp==2048)
                {
                    f=1;
                }
            else if(temp>2048);
            else
                {
                    // printf("%d::%d\n",temp,(int)(log(temp)/log(2)));
                    c[(int)(log2(temp))]++;
                }
        }
        if(f)
        {
                    printf("YES");
                    goto l;
        }
        for(int i=0;i<=11;i++)
        {
            // printf("%d::%d\n",i,c[i]);
            if(c[i]>=pow(2,(11-i)))
                {
                    printf("YES");
                    goto l;
                }
            else
                {
                    if(c[i]%2==0)
                {
                    c[i+1]+=c[i]/2;
                }
                else 
                {
                    c[i+1]+=(c[i]-1)/2;
                }
                // printf("NOW ::%d::%d::%d\n",i,c[i],c[i+1]);
                }
        }
        printf("NO");
        l:
        printf("\n");
        f=0;
    }
}