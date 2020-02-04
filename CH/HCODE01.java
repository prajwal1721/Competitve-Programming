import java.math.BigInteger;
import java.util.Scanner;
class s
{
    public static void main(String[] args) {
        String s;
        Scanner sc=new Scanner(System.in);
        s=sc.next();
        BigInteger b=new BigInteger(s);
        BigInteger f=new BigInteger("4");
        BigInteger a=new BigInteger("1");
        int p=Integer.parseInt(b.mod(f).toString());
        if(p==0) System.out.println(b);
        else if(p==1) System.out.println(1);
        else if(p==2) System.out.println(b.add(a));
        else if(p==3) System.out.println(0);sc.close();
    }
}