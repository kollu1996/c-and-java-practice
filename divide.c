import java.util.*;
public class Divide
{
public static void main (String []args)
{
  int i,j,k=0,m;
  float l;
  Scanner sc = new Scanner(System.in);
   j=sc.nextInt()
   int []a = new int[j];
    
  for(i=0;i<j;i++)
 {
  a[i]=sc.nextInt();
  k=k+a[i];
  }
  l=(float)k/j;
  m=Math.ceil(l);
 printf("%d\n",m);
}
}
