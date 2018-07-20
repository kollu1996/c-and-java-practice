import java.util.*;
public class hashmap
{
  public static void main(String []args)
   {
      Scanner sc = new Scanner(System.in);
      int k = sc.nextInt(),i,j,l;
      HashMap <Integer,Integer> p1 = new HashMap <Integer,Integer>();
     for(l=0;l<k;l++)
    {
      j = sc.nextInt();
      p1.put(l,j);
    }
   int m=sc.nextInt();
  if(p1.containsValue(m))
  {
   System.out.println("Found\n");
  }
  else
  {
    System.out.println("Found\n");
  }
}
}
      
