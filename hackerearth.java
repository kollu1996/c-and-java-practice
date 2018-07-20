import java.util.*;
public class hackerearth
{
 public static void main(String []args)
  {
   int i,j,k,s=0,t=0,r,q;
    Scanner sc = new Scanner(System.in);
     r=sc.nextLong();
   for(q=0;q<r;q++)
  {
   i=sc.nextLong();
   int []a = new int [i];
   for(j=0;j<i;j++)
   {
     a[j]=sc.nextLong();
   }
   Arrays.sort(a);
   for(j=0;j<i/2;j++)
   {
     s=s+Math.abs(a[i-j-1]-a[j]);
   }
  
  for(j=0;j<=i-2;j=j=j+2)
 {
   t=t+Math.abs(a[j]-a[j+1]);
 }
  System.out.println(t+" "+s);
  s=0;
  t=0;
 }
 }
}
