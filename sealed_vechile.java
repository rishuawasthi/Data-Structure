public class sealed_vechile {
    public static void main(String[] args) {
        vehicle.display();
        two_wheeler.display();
        e_bikes.display();
        three_wheeler.display();
        e_rickshaw.display();
        four_wheeler.display();
        e_car.display();
    }
}
sealed class vehicle permits two_wheeler,three_wheeler,four_wheeler
{
    static void display()
    {
        System.out.println("Vechile Class");
    }
}
sealed class two_wheeler extends vehicle permits e_bikes
{
    static void display()
    {
        System.out.println("Two-WHEELER");
    }
}
final class e_bikes extends two_wheeler
{
    static  void display()
    {
        System.out.println("E-BIKES");
    }
}
sealed class three_wheeler extends vehicle permits e_rickshaw
{
    static void display()
    {
        System.out.println("Three-WHEELER");
    }
}
final class e_rickshaw extends three_wheeler
{
    static  void display()
    {
        System.out.println("E-Rickshaw");
    }
}
sealed class four_wheeler extends vehicle permits e_car
{
    static void display()
    {
        System.out.println("FOUR-WHEELER");
    }
}
final class e_car extends four_wheeler
{
    static  void display()
    {
        System.out.println("E-CARS");
    }
}