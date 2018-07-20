import java.util.*;
public class Hashset1
{
  public static void main(String []args)
   {
       Scanner sc = new Scanner(System.in);
       int count1=0,i=0,j,k,k1;
       char s5;
     k=sc.nextInt();
     //s sc.nextLine();
     int []count = new int[10];
      for( j=0;j<10;j++)
       { 
          count[j]=0;
        }
          
      	Set <Character> ravi = new HashSet <Character>();
     for(k1=0;k1<k;k1++)
   {
   
     s5=sc.next().charAt(0);
      Character s3 = new Character(s5);
      if(!ravi.add(s3))
        {
          count[i]=1;
          i++;
        }
   }
    for(j=0;j<10;j++)
   {
        if(count[j]==0)
       {
           count1++;
        }
   }
  System.out.println(count1);
 }
}

 
