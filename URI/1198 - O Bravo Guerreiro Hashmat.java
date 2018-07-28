import java.io.IOException;
import java.math.BigInteger;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner scn = new Scanner(System.in);
        while(scn.hasNextBigInteger()){
        BigInteger a = scn.nextBigInteger();
        BigInteger b = scn.nextBigInteger();
        a = a.subtract(b).abs();
        System.out.println(a);
    }}
}
