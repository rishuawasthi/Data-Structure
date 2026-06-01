import java.util.Base64;
public class encodedecodeexample {
    public static void main(String[] args) {
        String original="Hell";
        String encodedString=Base64.getEncoder().encodeToString(original.getBytes());
        System.out.println("Encode String: "+encodedString);
        byte[] decodedBytes=Base64.getDecoder().decode(encodedString);
        String str=new String(decodedBytes);
        System.out.println("Decoded String: "+str);
    }
}
