public class method_over {
    public static void main(String[] args) {
        sliver s = new sliver();
        s.area();
        s.area(7);
    }
}
class sliver extends gold{
    @Override
    void area(){
        System.out.println("Area is 100");
    }
    void area (int a){
        System.out.println("Area is "+(22.0f/7)*a*a);
    }
}
 class gold {
    void area(){
        System.out.println("Area is 120");
    }
}