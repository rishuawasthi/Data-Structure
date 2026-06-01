@FunctionalInterface
interface a{
    public void sum(int a,int b);
}

public class add_interface {
    public static void main(String[] args) {
        a obj = (x, y) -> System.out.println("THE SUM IS " + (x + y));
        obj.sum(15, 20);
    }
}
