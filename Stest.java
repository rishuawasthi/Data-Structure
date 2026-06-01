class Student {
    String name, city;
    int age;

    // Method to display data
    void printData() {
        System.out.println("Student Name = " + name);
        System.out.println("City = " + city);
        System.out.println("Age = " + age);
        System.out.println("----------------------");
    }
}

class Stest {
    public static void main(String args[]) {

        // Creating objects
        Student s1 = new Student();
        Student s2 = new Student();

        // Assigning values to s1
        s1.name = "Amit";
        s1.city = "Dehradun";
        s1.age = 22;

        // Assigning values to s2
        s2.name = "Rahul";
        s2.city = "Delhi";
        s2.age = 20;

        // Calling method
        s1.printData();
        s2.printData();
    }
}