import java.lang.*;
public class p121 {
   public static void main(String[] args) {
     A ob=(int a,int b)-> a+b;
    System.out.println(ob.add(10,20));
    A.tt();
    ob.meth();
   }
}
@FunctionalInterface
interface A{
    public int add(int a,int b);
    default void meth ()
    {
        System.out.println("Deafault Method");
    }
    static void tt()
    {
        System.out.println("Static method");
    }
}