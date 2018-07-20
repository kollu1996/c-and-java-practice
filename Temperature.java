import java.util.*;
public class Temperature
{
 public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter temperature in centigrade");
    float a=sc.nextFloat();
    sc.close();
    float k = (a*1.8f)+32;
     System.out.println("temperature in farenheit is"+" " +k);
  }
}
    
