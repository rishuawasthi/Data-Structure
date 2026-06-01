import java.util.*;

public class sort_eve {
    public static void main(String[] args) {
    Scanner sc =new Scanner(System.in);
    List<Integer> obj=new ArrayList<>(10);
    System.out.println("Enter 10 VAriable");
    for(int i=0;i<10;i++)
    {
        int n=sc.nextInt();
        obj.add(n);

    }
    obj.stream().sorted().filter(x->x%2==0).forEach(x->System.out.println(x));
    }
}
