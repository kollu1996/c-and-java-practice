import java.util.*;
 public class Hacksep
{
  public static void main(String []args) 
   {
     Scanner sc = new Scanner(System.in);
     int p = sc.nextInt();
     int a [] = new int [p];
     for(int k=0;k<p;k++)
    {
       a[k]=sc.nextInt();
    }
 
    int q = sc.nextInt();
    Hacksep h1 = new Hacksep();
    for(int k1=0;k1<q;k1++)
     {
       int q1 = sc.nextInt();
       int q2 = h1.fun(a,q1,p);
       System.out.println(q2);
     }
  }
  public int fun(int []a,int q1,int p)
   {
      int  i1,count=0;
      for(i1=0;i1<p;i1++)
   {
     if(((a[i1])%q1)==0)
      {
        count++;
      }
   }
  return count;
  }
}
