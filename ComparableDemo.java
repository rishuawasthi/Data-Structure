import java.util.ArrayList;
import java.util.List;
import java.util.PriorityQueue;
import java.util.Queue;

public class ComparableDemo {
    public static void main(String[] args) {
    List <student> s=new ArrayList<>(5);
    s.add(new student(2,90,"sahil"));
    s.add(new student(3,100,"rishu"));
    s.add(new student(5,93,"Rahil"));
    s.add(new student(10,80,"Anil"));
    s.add(new student(20,95,"gupta"));
    for(student i:s) {
        System.out.println(i.roll+"  "+i.marks+"  "+i.name);
    }
    s.sort(null);

    Queue <Integer> s1=new PriorityQueue<>();
    for(int i=0;i<5;i++) { 
        s1.add(i);    

    }
    System.out.println("LINKED LIST");
    System.out.println(s1.remove());
    
    for(int i:s1) { 
        System.out.println(i);      

    }

}
}
 class student implements Comparable <student>
{
 int roll,marks;
 String name;
 student(int r,int m,String N)
 {
   this.roll=r;
   this.marks=m;
   this.name=N;
 }
 public int compareTo(student that)
 {
   return that.marks-this.marks;
 }

}

