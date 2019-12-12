#include<stdio.h>
int main()
	{
		// your code goes here
		
    int w;
    scanf("%d",&w);
    while(w--!=0)
    {
        long c=0;
        int m,n,q;
    scanf("%d%d%d",&m,&n,&q);
        int t,r;
        int s[m],col[n];
        int ind;
         int i;
        for(i=0;i<q;i++)                             
            {
    scanf("%d%d",&t,&r);
                t--;r--;
                if(s[t]==2)s[t]=0;
                if(col[r]==r)col[r]=0;
                s[t]++;col[r]++;
            }
            ind =0;
        while(ind<m)
        {
            int mat[n];
        //  for(i=0;i<m;i++)
            // mat[i]=0;
            for(int k=0;k<n;k++)
                {
                    mat[k]=col[k];
                }
            for(int j=0;j<n;j++)
                {
                    mat[j]+=(s[ind]);
                if((mat[j]&1)==1) c++;            
                }                    
            ind++;
        }
        printf("%ld",c);
    }

}
