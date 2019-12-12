#include<stdio.h>
int main()
{
    int w;
    scanf("%d",&w);
    while(w--)
    {
        long c=0;
        int m,n,q;
        scanf("%d%d%d",&m,&n,&q);
         int t;
            int a[q];
            int size=m;
         int ind;
        int s[m];
         int c_in=0;
         int i;
        //  for(int i=0;i<m;i++)
        //     s[i]=0;
        for(i=0;i<q;i++)
            {
                scanf("%d%d",&t,&a[i]);
                t--;a[i]--;
                s[t]++;
            }
            ind =0;
        while(ind<m)
        {
          int mat[n];
         for(int i=0;i<m;i++)
            mat[i]=0;
            for(int k=0;k<q;k++)
                {
                    mat[a[k]]++;
                }
            for(int j=0;j<n;j++)
                mat[j]+=(s[ind]);
            for(int j=0;j<n;j++)
            {
                if(mat[j] & 1) c++;            
            }   
            ind++;
        }
       
            printf("%ld\n",c);        
    }

}

