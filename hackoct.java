import java.util.*;
public class hackoct
 {
public static void main (String []args)
   {
      int p,q,r,count=0;
      Scanner sc = new Scanner(System.in);
      p=sc.nextInt();
    int []a = new int [p];
      for(r=0;r<p;r++)
       {
         a[r]=sc.nextInt();
       }
      q=sc.nextInt();
       int []b=new int[q];
      for(r=0;r<p;r++)
       {
         b[r]=sc.nextInt();
       }
       int max;
     max=b[0];
     for(r=1;r<q;r++)
    {
       if(b[r]>max)
        { 
          max=b[r];
        }
     }
   max=max+1;
   for(r=0;r<p;r++)
   {
      if(a[r]<max)
      count=count+(max-a[r]);
    }
     System.out.println(count);
  }
}
