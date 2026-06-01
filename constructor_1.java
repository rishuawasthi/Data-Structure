public class constructor_1 {
    int id;
    String name;
    static String college="SRM";
    //parameterized constructor
    constructor_1(int i,String n)
    {
        id=i;
        name=n;
    }

    public constructor_1() {
        id=0;
        name="Rishu";
    }
    void display()
    {
        System.out.println(id+" "+name+" "+college);
    }
    public static void main(String[] args) {
        constructor_1 s1=new constructor_1(101,"Rishu");
        constructor_1 s2=new constructor_1();
        s1.display();
        s2.display();
    }   
    
    
}
