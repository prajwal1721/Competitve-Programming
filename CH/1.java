import java.util.*;
class Bucket_sort
{
        static int[] sort(int[] a)
        {
                int no=a.length;
                int bucket[][]=new int[11][1000];
                int c[]=new int[11],t;
                for(int i=0;i<=10;i++)
                    c[i]=0;
                for(int i=0;i<no;i++)
                        {bucket[(int)(a[i]/10)][(int)c[(int)a[i]/10]]=a[i];c[(int)a[i]/10]++;}
                for(int i=0;i<=10;i++)
                        for(int j=0;j<c[i]-1;j++)
                                for(int k=0;k<c[i]-1;k++)
                                        if(bucket[i][k]>bucket[i][k+1])
                                                {
                                                        t=bucket[i][k];
                                                        bucket[i][k+1]=bucket[i][k];
                                                        bucket[i][k+1]=t;
                                                }
                int ans[]=new int[no];
                int p=0;
                for(int i=0;i<=10;i++)
                        for(int j=0;j<c[i];j++)
                                ans[p++]=bucket[i][j];
                return ans;
        }
        public static void main(String args[])
        {
                Random r=new Random();
                int a[]=new int[100];
                for(int i=0;i<100;i++)
                        a[i]=r.nextInt(100);
                int ans[]=sort(a);
                for(int i=0;i<100;i++)
                        System.out.println(ans[i]);
        }
}
