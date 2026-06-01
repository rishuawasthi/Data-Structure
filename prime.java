public class prime {
    public static void main(String[] args) {
        int a=Integer.parseInt(args[0]);
        for(int i=2;i<a/2;i++)
        {
            if(a%i==0)
            {
                System.out.println("not prime");
                return;
            }
        }
        System.out.println("prime");
    }
}
