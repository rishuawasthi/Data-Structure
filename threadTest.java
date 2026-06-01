
import java.util.Vector;

public class threadTest {
    public static void main(String[] args) {
        Vector <Integer> v = new Vector<>(5);
        Thread t1 = new Thread(() -> {
            for(int i=0;i<1000;i++)
            {
                v.add(i);
            }   
        });
        Thread t2 = new Thread(() -> {
            for(int i=0;i<1000;i++)
            {
                v.add(i);
            }
        });
        t1.start();
        t2.start();
        try {
            t1.join();
            t2.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println(v.size());
    }
}
