@FunctionalInterface
interface A{
    public int sum(int n);
}
public class interface_nat {
    public static void main(String[] args) {
        A obj=(n)->{
            int sum=0;
            for(int i=0;i<=n;i++)
            {
                sum+=i;
            }
            return sum;
        };
        obj.sum(10);
    }
    
}
 