 class Student {
    String name, city;
    int age;

    void printData() {
        System.out.println(name + " " + city + " " + age);
    }
}

public class Stest1 {
    public static void main(String args[]) {
        Student s1 = new Student();
        Student s2 = new Student();

        s1.name = "Amit";
        s1.city = "Dehradun";
        s1.age = 22;

        s2.name = "Rahul";
        s2.city = "Delhi";
        s2.age = 20;

        s1.printData();
        s2.printData();
    }
} 
