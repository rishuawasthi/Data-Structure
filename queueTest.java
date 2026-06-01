import java.util.*;
public class queueTest {
    public static void main(String[] args) {
        Queue <Integer> Q=new PriorityQueue<>(Collections.reverseOrder());//by default it is min heap but we can change it to max heap by using reverse order
        Q.add(10);
        Q.add(2);
        Q.add(30);
        System.out.println(Q.poll());
        System.out.println(Q);
    }
}
