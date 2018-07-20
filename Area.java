import java.util.*;
public class Area
{
  public static final float pi=3.14f;
  public static void main(String args[] )
   {
     Scanner sc = new Scanner(System.in);
     System.out.println("Enter radius\n");
     float a = sc.nextFloat();
     System.out.println("Enter length\n");
     float b = sc.nextFloat();
    float k =   pi * a * a;
    float l = k * b;
    System.out.println("Area of circle is\n" + k);
     System.out.println("volume is\n" + l);
  }
}
     
