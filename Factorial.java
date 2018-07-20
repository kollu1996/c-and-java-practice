import java.util.*;
public class Factorial
{
  public static long a,k=1,c,d;
 public static void main(String args[])
  {
     long k,a;
     Scanner sc = new Scanner(System.in);
     System.out.println("Enter a number");
     a=sc.nextInt();
     Factorial f1 = new Factorial();
     
     k=f1.factorial(a);
    System.out.println(k);
 }
  public static long factorial (long b)
   {
     c=b;
     if(c==1)
      {
        return 1;
      }
   else
    {
      d = c * factorial(c-1);
    }
  return d;
  }
}
