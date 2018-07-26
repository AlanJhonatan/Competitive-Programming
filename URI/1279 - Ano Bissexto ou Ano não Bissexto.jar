import java.io.IOException;
import java.math.BigInteger;
import java.util.Scanner;
public class Main {
  public static void main(String[] args) throws IOException {
     Scanner scn = new Scanner(System.in);
     BigInteger bi4   = new BigInteger("4");
     BigInteger bi15  = new BigInteger("15");
     BigInteger bi55  = new BigInteger("55");
     BigInteger bi100 = new BigInteger("100");
     BigInteger bi400 = new BigInteger("400");
     int espc = 0;
     int anobi = 0;
     int anobu = 0;
     int anohu = 0;
     while (scn.hasNextLine()){
      String line = scn.nextLine();
      BigInteger biinp = new BigInteger(line);
     
     if (biinp.mod(bi4).intValue() == 0 && (biinp.mod(bi100).intValue() != 0 || biinp.mod(bi400).intValue() == 0)){
         anobi = 1;
     }
     if (anobi == 1 && biinp.mod(bi55).intValue() == 0 ){
         anobu = 1;
     }
     if (biinp.mod(bi15).intValue() == 0){
         anohu = 1;
     }
     
     if (espc == 1)
             System.out.println("");
     if (anobi == 1){
            System.out.println("This is leap year.");
     }
     if (anohu == 1){
            System.out.println("This is huluculu festival year.");
     }
     if (anobu == 1){
            System.out.println("This is bulukulu festival year.");
            }
     if  (anobu == 0 && anohu == 0 && anobi == 0){
            System.out.println("This is an ordinary year.");
       }   
     if (espc == 0)
         espc = 1;
     anobi = 0;anobu = 0; anohu = 0;
     }
    }
  }
