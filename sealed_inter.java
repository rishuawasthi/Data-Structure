public class sealed_inter {
    public static void main(String[] args) {
        payments upiPayment = new upi();
        payments carPayment = new card();
        payments cashpayment=new cash();
        upiPayment.display();
        carPayment.display();
        cashpayment.display();

    }
}
sealed interface payments permits upi,card,cash
{
    void display();
}
final class upi implements payments
{
      public void display()
    {
        System.out.println("UPI");
    }
}
final class card implements payments
{
    public void display()
    {
        System.out.println("Card");
    }
}
final class cash implements payments
{
    public void display()
    {
        System.out.println("Cash");
    }
}