import java.util.*;
public class Hash1
  {
    public static void main(String []args)
      {
          HashMap <Integer,Integer> hmap = new HashMap <Integer,Integer>();
          hmap.put(1,15);
          hmap.put(2,14);
          hmap.put(3,13);
          hmap.put(4,12);
        
    Set s1 = hmap.entrySet();
    Iterator itr = s1.iterator();
    while(itr.hasNext())
   {
     Map.Entry me = (Map.Entry) itr.next();
    System.out.println(me.getValue());
  }
}
}
   
