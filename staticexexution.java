public class staticexexution {
    static int a=print("static variable");
    static {
        System.out.println(a);
        print("static block");
    }
    int b=print("instance variable");

    public staticexexution() {
    print("constructor");
    }
    public static void main(String[] args) {
        print("main method");
        new staticexexution();
    }
    static int print(String s)
    {
        System.out.println(s);
        return 10;
    }
     
    
}
