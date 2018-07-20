import java.util.*;
import java.util.regex.*;
public class Sentencereverse
{
  public static void main(String []args)
{
  
 int j,k;
 String []a=new String[100];
 Scanner sc = new Scanner(System.in);
 j=sc.nextInt();
 Sentencereverse r1 = new Sentencereverse();
 for(k=0;k<j;k++)
 {
  a[k]=r1.reversemethod();
 }
 for(k=0;k<j;k++)
 {
  System.out.println(a[k]);
 }
 }

 public  String reversemethod()
{
 int i;
 String s1,s2;
 String s3=" ";
 Scanner sc = new Scanner(System.in);
 s1=sc.nextLine();
 String regex = "\\.";
Pattern p1 = Pattern.compile(regex);
  String []array = p1.split(s1);
  for(i=array.length-1;i>=0;i--)
  {
   s3+=array[i]+".";
  }
 return s3.trim();
}
}
  

  
