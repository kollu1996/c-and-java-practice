import java.util.*;
public class Hash
 {
   public static void main(String []args)
     {
        HashMap <Integer,Integer> hmap = new HashMap <Integer,Integer>();
         hmap.put(1,21);
         hmap.put(2,22);
         hmap.put(3,23);
         hmap.put(4,24);
         hmap.put(5,25);
      Set e1 = hmap.entrySet();
      Iterator itr = e1.iterator();
      hmap.remove(2);
     System.out.println(hmap.get(3));
      while(itr.hasNext())
      {
        Map.Entry me = (Map.Entry) itr.next();
        System.out.println(me.getValue());
      }
    }

}
        
