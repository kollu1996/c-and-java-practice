import java.util.*;
public class Array
 {
   public static void main(String []args)
     {
       List <Integer> a1 = new ArrayList <Integer>();
       Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
         while(k!=0)
      {
         int k1 = sc.nextInt();
         a1.add(k1);
         k--;
      }

   Iterator <Integer> i1 = a1.iterator();
   while(i1.hasNext())
  {
     int p = i1.next();
     System.out.println(p);
  }
}
}
