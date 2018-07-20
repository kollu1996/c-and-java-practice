import java.util.*;
public class Largest
{

 public static void main(String args[])
{
  int k,l,j,i;
  Scanner sc = new  Scanner(System.in);
   j=sc.nextInt();
  int[] a = new int[j];
  for(i=0;i<j;i++)
 {
   a[i]=sc.nextInt();
 }
 Largest a1 = new Largest();
 k=a1.Findlargest(a,j);
 l=a1.Findsmallest(a,j);
 System.out.println("Largest is "+k+ " "+"Smallest is "+l);
}
public  int Findlargest(int []a,int j)
{
int big = a[0],i;
  for(i=1;i<j;i++)
    {
     if(a[i]>big)
      {
         big=a[i];
       }
    }
  return (big);
}
public static int Findsmallest(int a[],int j)
{
int small = a[0],i,k;
 
  for(i=1;i<j;i++)
    {
     if(a[i]<small)
      {
         small=a[i];
       }
    }
  return (small);
}
}
  
