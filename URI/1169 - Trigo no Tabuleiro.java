import java.io.IOException;
import java.math.BigInteger;
import java.util.Scanner;
public class Main {
 public static void main(String[] args) throws IOException {
     Scanner scn = new Scanner(System.in);
     int t = scn.nextInt();
     for (int i = 0; i < t; i++){
     int n = scn.nextInt();
     BigInteger br = new BigInteger("2");
     BigInteger bi12 = new BigInteger("12");
     BigInteger bi1000 = new BigInteger("1000");     
     br = br.pow(n);
     br = br.divide(bi12);
     br = br.divide(bi1000);
     System.out.println(br + " kg");
     }
    }
}
