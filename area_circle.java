
import java.util.*;

public class area_circle {
    public static void main(String[] args) {
        Scanner obj= new Scanner(System.in);
        double radius ;
        radius = obj.nextDouble();
        double area = Math.PI * radius * radius;
        System.out.println("The area of the circle with radius " + radius + " is: " + area);
        obj.close();
    }
    
}