import java.util.*;
public class Hashset
{
  public static void main(String []args)
   {
       Scanner sc = new Scanner(System.in);
       int count1=0,i=0,j,k,k1;
     k=sc.nextInt();
      sc.nextLine();
     int []count = new int[10];
      for( j=0;j<10;j++)
       { 
          count[j]=0;
        }
          
      	Set <String> ravi = new HashSet <String>();
     for(k1=0;k1<k;k1++)
   {
       String s3=sc.nextLine();
      if(!ravi.add(new String(s3)))
        {
          count[i]=1;
          i++;
        }
   }
    for(j=0;j<10;j++)
   {
        if(count[j]==1)
       {
           count1++;
        }
   }
  System.out.println(count1);
 }
}

 
