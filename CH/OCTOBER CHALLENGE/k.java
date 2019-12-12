/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		
    Scanner sc=new Scanner(System.in);
    int w;
    w=sc.nextInt();
    while(w--!=0)
    {
        long c=0;
        int m,n,q;
        m=sc.nextInt();
        n=sc.nextInt();
        q=sc.nextInt();;
        int t,r;
        int[] s=new int[m];
        int[] col=new int[n];
        // int[][] a=new int[m][n];
        int ind;
        // int[] s =new int[m];
         int i;
        //  for(int i=0;i<m;i++)
        //     s[i]=0;
        for(i=0;i<q;i++)                             
            {
            t=sc.nextInt();
            r=sc.nextInt();            
                t--;r--;
                if(s[t]==2)s[t]=0;
                if(col[r]==r)col[r]=0;
                s[t]++;col[r]++;
            }
            ind =0;
        while(ind<m)
        {
        int[] mat=new int[n];
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
       System.out.println(c);
    }
    sc.close();

	}
}
