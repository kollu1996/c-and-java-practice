import java.util.*;
import java.util.regex.*;
public class Stringmatch
{
 public static void main(String []args)
  {
    int c,i;
    Scanner sc = new Scanner(System.in);
    String s1,s2,sub,p;
    s1=sc.nextLine();
    p=sc.nextLine();
    s2=sc.nextLine();
    int length = s1.length();
    
  int count=0;
  for( c = 0 ; c < length ; c++ )
      {
         for( i = 1 ; i <= length - c ; i++ )
         {
            sub = s1.substring(c, c+i);
            if(sub.contains(s2))
               {
                count++;
              }
             System.out.println(sub);
         }
      }
     System.out.println(count);
   }
}







