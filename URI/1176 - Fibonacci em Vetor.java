import java.io.IOException;
import java.math.BigInteger;
import java.util.*;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner scn = new Scanner(System.in);
        BigInteger bi = new BigInteger("-1");
        List <BigInteger> fib = new ArrayList<>();

        for (int i = 0; i < 61; i++){
            fib.add(bi);
        }
        fib.set(0, new BigInteger("0"));
        fib.set(1, new BigInteger("1"));


        int t, n;
        t = scn.nextInt();
        for(int i = 0; i < t; i++){
            n = scn.nextInt();
            if(fib.get(n) != bi){
                System.out.println("Fib(" + n + ") = " + fib.get(n));
            }
            else {
                for (int j = 2; j <= n; j++) {
                    fib.set(j, fib.get(j-1).add(fib.get(j-2)));
                }
                System.out.println("Fib("+ n + ") = "+ fib.get(n));
            }
        }
 
    }
 
}