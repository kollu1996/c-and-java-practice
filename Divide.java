import java.util.*;
public class Divide
{
public static void main (String []args)
{
  int i,j,k=0,m;
  double l;
  Scanner sc = new Scanner(System.in);
   j=sc.nextInt();
   int []a = new int[j];
    
  for(i=0;i<j;i++)
 {
  a[i]=sc.nextInt();
  k=k+a[i];
  }
  l=(double)k/j;
  m=(int)Math.ceil(l);
  if(k%j==0)
 System.out.println(m+1);
 else
 System.out.println(m);
}
}
