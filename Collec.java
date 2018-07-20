import java.util.*;
public class Collec
{

 public static void main(String []args)
  {
    ArrayList <String> list = new ArrayList<String>();
     list.add("venkatesh");
     list.add("nikhil");
     list.add("manoj");
     list.add("surya");
 
    Collections.sort(list);

  System.out.println ("SORTED ORDER:"+ list);
  }
}
