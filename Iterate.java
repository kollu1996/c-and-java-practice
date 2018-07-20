import java.util.*;
public class Iterate
{
  public static void main(String []args)
   {
      ArrayList <Integer> a1 = new ArrayList <Integer>();
      Scanner sc = new Scanner(System.in);
    int q=sc.nextInt();
      while(q!=0) 
   {
      int r = sc.nextInt();
      a1.add(r);
      q=sc.nextInt();
  }
    
   Iterator <Integer> itr = a1.iterator();
  
 while(itr.hasNext())
  {
     Integer p;
     p = (Integer)itr.next();
    
     if(p.equals(5)) 
     {
      itr.remove();
     }
  }
  for(int i=0;i<a1.size();i++)
  {
    System.out.println(a1.get(i));
  }
 }
}
