import java.util.*;
public class Hackerjune
{
public static void main(String []args)
{
  int []a=new int[100];
  int []b=new int[100];
  int i,j,k,l,p,t,h;
  Scanner sc = new Scanner(System.in);
  j=sc.nextInt();
  for(i=0;i<j;i++)
  {
    a[i]=sc.nextInt();
  }
 l=sc.nextInt();
 for(k=0;k<l;k++)
 {
  b[k]=sc.nextInt();
 }
 Hackerjune p1 = new Hackerjune();
 Hackerjune p2 = new Hackerjune();
 for(i=0;i<j;i++)
{
 /*t=p1.check(b[i],i);
 System.out.println(t);*/
 h=p2.repetation(a,j);
 System.out.println(h);
}
}
public int repetation(int[]a,int j)
{
  int k;
  Arrays.sort(a);
  k=Arrays.binarySearch(a,1);
  return k;
}
  
public int check(int a,int b)
{
 if(a>b)
 return a;
 else
 return b;
}
}

 

 
