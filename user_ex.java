class exception extends Throwable
{

    public exception(String message) {
        super(message);
    }
  
}
public class user_ex  {
    void net(int t) throws exception{
        if(t<0)
        {
            throw new exception("Negative Number Exception");
        }
        else
        {
            System.out.println("The number is"+t );
        }
    }
    public static void main(String[] args) throws exception {
        user_ex obj =new user_ex();
        try {
            obj.net(-10);
        } catch (Exception e) {
            System.out.println(e);
        }

    }
}
