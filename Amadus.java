import java.util.*;
public class Amadus
{
  public static void main (String[]args)
   {
      int i,j,k,k1,k2;
      String s1,s2,s3,s4,s5,s6,s8,s9;
            Amadus am = new Amadus();
          Scanner sc = new Scanner(System.in);
          k=sc.nextInt();
         
          int []a = new int [k];
         for(k2=0;k2<k;k2++)
         {
           a[k2]=sc.nextInt();
         }
      Arrays.sort(a);
     s1=Integer.toString(a[0]);
     s2=Integer.toString(a[1]);
     s8=s1.concat(s2);
     s9=s2.concat(s1);
       k1=s8.compareTo(s9);
   if(k1>0)
    {
       s6=s8;
    }
   else
    {
     s6=s9;
    }
    i=2;
      while(i<k)
    {
       s4=Integer.toString(a[i]);
     s5=am.fun(s6,s4);
       s6=s5;
      i++;
     } 
    System.out.println(s6);
   }


     public  String fun(String s5,String s6)
    {
     
      String s3,s4;
      int k;
      s3=s6.concat(s5);
      s4=s5.concat(s6);
       k=s3.compareTo(s4);
     if(k>0)
      {
      return s3;
     }
      else
        {
          return s4;
        }
   }
}

