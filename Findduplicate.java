
import java.util.*;
import java.util.HashMap; 
import java.util.HashSet; 
import java.util.Map; 
import java.util.Map.Entry; 
import java.util.Set;

 public class Findduplicate
 {
   public static void main(String []args)
     {
      Scanner sc = new Scanner(System.in);
        int i,j;
      HashMap <Integer,Integer> p1 = new HashMap <Integer,Integer>();
      while(true)
      { 
        i=sc.nextInt();
        if(i==1)
        {  
          j=sc.nextInt();
          Integer p=p1.get(j);
          if(p==null)
          {  
             p1.put(j,1);
          }
          else
          {
            p1.put(j,++p);
          }
           i=sc.nextInt();
        }
         else if(i==2)
         {  
            break;
         }
      }
     Set<Entry<Integer, Integer>> entrySet = p1.entrySet(); 
     for (Entry<Integer, Integer> entry : entrySet)
     { 
       if (entry.getValue() > 1) 
      { 
         System.out.println("Duplicate element from array : " + entry.getKey()); 
      }
     }
   }
 }
     
