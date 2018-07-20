import java.util.*;
 class Myclass implements Runnable
{
  public void run()
  {
    int n,i;
   Scanner sc = new Scanner(System.in);
   n=sc.nextInt();
   for ( i=0;i<n;i++) 
    {
      System.out.println("Run by"+ " " +Thread.currentThread().getName()+" "+i);
    }
  }
}
 
 public class Threads1
  {
    public static void main(String []args)
   {
    Myclass p1 = new Myclass();
    Thread t1 = new Thread(p1);
    Thread t2 = new Thread(p1);
    Thread t3 = new Thread(p1);
    t1.setName("nikhil");
    t2.setName("venky");
    t3.setName("durga");
    t1.start();
    t2.start(); 
    t3.start();
   }
 }
  
    
      
      
