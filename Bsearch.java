import java.util.*;
public class Bsearch
 {
  public static void main(String []args)
 {
  int i,j,k,l; 
  int []a=new int[100];
  Scanner sc = new Scanner(System.in);
 System.out.println("Enter length of array\n");
  j=sc.nextInt();
  for(i=0;i<j;i++)
 {
  a[i]=sc.nextInt();
 }
 System.out.println("Enter element you wanna search\n");
 l=sc.nextInt();
 Bsearch s1 = new Bsearch();
 k=s1.function(a,0,j-1,l);
 if(k==1)
{
 System.out.println("ELEMENT FOUND\n");
 }
 else if(k==-1)
 {
   System.out.println("ELEMENT NOT FOUND\n");
 }
}

 public int function(int a[],int i,int j,int l)
 {
    int k;
  if(j>=i)
  {
   k=i+(j-1)/2;
   if(a[k]==l)
    {
       return 1;
     }
  else if(a[k]>l)
     {
       return function(a,i,k-1,l);
     }
  else if(a[k]<l)
    {
      return function(a,k+1,j,l);
     }
   }
  return -1;
}
}
  
