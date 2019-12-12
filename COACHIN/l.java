import java.lang.*;
public class l
{
    public static void main(final String[] args) {
        try {
        // final tem t = new tem();
        // t.disp();
        StringBuffer s=new StringBuffer("TANVI");
        StringBuffer sa=s.replace(0 , 1," dd ");
        // s.delete(0,3);
        System.out.println(sa+ " "+s);
        // System.out.println("HI");
        }
        // catch(Exception e)
        // {
        // System.out.println(e);
        // }
        finally
        {
            System.out.println("ODNE");
        }
    }
}

class tem {
    void disp() {
        try {
            System.out.println(1 / 0);
        } catch (final Exception e)
        {
            System.out.println(e);
            throw e;
        }
    }
}