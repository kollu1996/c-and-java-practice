import java.util.*;
public class Sumofdigits
{
  public static void main(String args[] )
   {
     Scanner sc = new Scanner(System.in);
    int a= sc.nextInt();
    int k;
    int b=0;
    while(a!=0)
    {
     k=a%10;
     a=a/10;
     b = b + k;
    }
  System.out.println("Sum of digits is" + b);
}
}
     
