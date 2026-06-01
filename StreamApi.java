import java.util.*;
public class StreamApi {
    public static void main(String[] args) {
        /*List <Integer> num=new ArrayList<>(Arrays.asList(10,20,30,40,50));
        int sum=num.stream().filter(n->n>=30).reduce(0,(a,b)->a+b);
        System.out.println(sum);
        List <Integer> x=num.stream().filter(n->n>=30).collect(Collectors.toCollection(ArrayList::new));
        System.out.println(x);*/
        List <String> names=new ArrayList<>(Arrays.asList("Rishu","Awasthi","Rishu","Awasthi","sam","samay"));
        names.stream().map(z->z.toUpperCase()).filter(z->z.startsWith("S")).forEach(c->System.out.println(c));
    }
}
