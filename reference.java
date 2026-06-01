public class reference {

    public reference() {
        System.out.println("Constructor");
    }
    public reference(int a,int b){
        System.out.println("Constructor with parameters");
        System.err.println("a="+a+"b="+b);
    }
    
    public static void says()
    {
        System.out.println("Hello ,Sir Jii");
    }
    void b()
    {
        System.out.println("Instance method");
    }
    public static void main(String[] args) {
       // a ob=reference :: says;
        //ob.say();
        //reference obj=new reference();
        //a ob2=obj::b;
        //ob2.say();
         a ob3 =reference:: new;
         ob3.say(10,20);
    }
}  
@FunctionalInterface
interface a
{
 void say(int a,int b);
}