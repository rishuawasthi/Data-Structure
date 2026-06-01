import java.lang.*;
import java.util.*;
class customizesort implements Comparator<Integer>
{
    @Override
    public int compare(Integer a, Integer b)
    {
    if(a%2==0 && b%2!=0)
        return -1;
    else if(a%2!=0 && b%2==0)
        return 1;
    else if (a%2==0 && b%2==0)
        return a-b;
    else
        return a-b;
    }
}
public class ArrayListExample
{
    public static void main(String[] args) {
        List <Integer> list1=new ArrayList<>(10);
        list1.add(10);
        list1.add(20);
        list1.add(30);
        list1.add(40);
        list1.add(50);
        list1.add(60);
        list1.add(70);
        list1.add(80);
        list1.add(90);
        list1.add(100);
        System.out.println("List created is"+list1);
        List <Integer> list2 =new ArrayList<>(list1);
        System.out.println("List2 Created is"+list2);
        list2.set(3, 5);
        list2.addFirst(4);
        System.out.println("Updated list2 is"+list2);
        list2.removeAll(list1);
        System.out.println("Final list2 is"+list2);
        list2.add(3);
        list2.add(8);
        list2.add(7);
      
        list2.sort(new customizesort());  
        System.out.println("Final list2 is"+list2);
    }
}