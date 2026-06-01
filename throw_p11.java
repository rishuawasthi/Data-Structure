import java.util.*;
public class throw_p11{
    static void neg_num(int num) throws ArithmeticException
    {
        if(num<0)
        {
            throw new ArithmeticException("Negative number is entered");     
        }
        else{
            System.out.println("The number is: "+num);
        }
    }
    public static void main (String [] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int num = sc.nextInt();
        try {
            neg_num(num);
        } catch (Exception e) {
            System.out.println(e);
        }
        finally{
            sc.close();
            System.out.println("This block is always executed");
        }

    }
}