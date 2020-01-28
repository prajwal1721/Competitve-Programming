/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.Math.BigInteger;
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
        // your code goes here
        long  a[]=new long[101];
        a[0]=1;
        long i=1;
        int j=1;
        BigInteger b[]=new BigInteger[101];
        for(;i<101;i++,j++)
        {
            b[(int)i]=b[(int)i-1]*i;
        }
        Scanner sc=new Scanner(System.in);
        int p=sc.nextInt();
        while (p-- !=0) {
            long t=sc.nextLong();
            System.out.println(b[(int)t]);
        }
	}
}
