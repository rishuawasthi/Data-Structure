import java.util.ArrayDeque;
import java.util.Deque;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;
import java.util.TreeSet;
public class setTest {
    public static void main(String[] args) {
        Set <Integer> set = new HashSet<>();
        Deque <Integer> dq = new ArrayDeque<>();
        dq.add(10); 
        dq.add(2);
        dq.add(30);
        System.out.println(dq.poll());
        set.add(20);
        set.add(30);
        set.add(10);
        System.out.println(set);
        Iterator <Integer> it = set.iterator();
        while(it.hasNext())
        {
            System.out.println(it.next());
        }
        Set <Integer> st=new TreeSet<>();
        st.add(10);
        st.add(20);
        st.add(23) ;
        st.add(20);
        System.out.println(st);       
    }
}
