import java.io.*;
import java.util.*;

 class Solution {

    public static void main(String[] args) {
        long arr[]=new long[4];
         int i,j,f=0;
        Scanner sc=new Scanner(System.in);
        arr[0]=sc.nextLong();
        arr[1]=sc.nextLong();
        arr[2]=sc.nextLong();
        arr[3]=sc.nextLong();
        int c=0,cnt=0;
        Arrays.sort(arr);
        for(i=0;i<4;i++)
        { 
            if(arr[i]==0)
                c++;
        }
        if(c>1)
            System.out.println(arr[3]);
        else{
                        Arrays.sort(arr);

        while( (arr[0]>0&&arr[1]>0&&arr[2]>0) ||(arr[1]>0&&arr[2]>0&&arr[3]>0)||(arr[0]>0&&arr[1]>0&&arr[3]>0)||(arr[0]>0&&arr[2]>0&&arr[3]>0))
        {
            c=0;
            Arrays.sort(arr);
            for( j=0;j<3;j++)
                if(arr[j]!=j) f=1;
            if(f==0) break;
            for(i=0;i<4;i++)
                if(arr[i]==0)
                c++;
            if(c==0)
            {
                arr[0]-=1;
                arr[1]-=1;
                arr[2]-=1;
                arr[3]+=2;
            }
            else if(c==1)
            {
                arr[0]+=2;
                arr[1]-=1;
                arr[2]-=1;
                arr[3]-=1;
            }
            else
            {
                break;
            }
            f=0;
            
        }

            Arrays.sort(arr);
            System.out.println(arr[3]);
        }
}
}