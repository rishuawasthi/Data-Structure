public class sing_in {
    public static void main(String[] args) {
        car mycar=new car ();//upcasting gives access to only parent class methods
        mycar.startengine();
        mycar.acccelerate();
        
    }
}
class vechile{
    void startengine(){
    System.out.println("started");
 }
}
class car extends vechile{
    void acccelerate ()
    {
        System.out.println("car accelerating");

    }
    //method overriding
        void startengine(){
    System.out.println("starting");
 }

}



