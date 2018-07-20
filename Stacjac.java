import java.util.*;
public class Stacjac
     {
       public static void main(String []args)
         {
           Stack <Integer> s1 = new Stack <Integer>();
           Scanner sc = new Scanner (System.in);
           int p = sc.nextInt();
           while(p!=0)
           {
            int q = sc.nextInt();
             s1.push(q);
           }
     System.out.println(s1.peek());

        }
  }
