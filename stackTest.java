import java.util.*;
public class stackTest {
    public static void main(String[] args) {
    List <Student> s= new LinkedList<>(Arrays.asList(new Student("abc",1,'a'),new Student("abcd",2,'b'),new Student("abcde",3,'c')));
    s.sort(null);
    System.out.println(s.get(0).name);
}
}
class Student implements Comparable<Student>{
    String name;
    int rollNo;
    char ch;

    public Student(String name,int rollNo,char c)
    {
        this.name=name;
        this.rollNo=rollNo;
        this.ch=c;
    }
    @Override
    public int compareTo(Student o) {
       return o.name.length()-this.name.length();
    }
}