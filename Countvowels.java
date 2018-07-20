import java.util.*;
public class Countvowels
 {
   public int count(String s1)
    {
     int count=0,i,j;
     char s2;
     for(i=0;i<s1.length();i++)
       {
         s2=s1.charAt(i);
         if(s2=='a'||s2=='e'||s2=='i'||s2=='o'||s2=='u')
             {
                count++;
             }
          
         }
       return count;
     }

   public static void main(String []args)
    {
          int i,j,k;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter string\n");
        String s1 = sc.nextLine();
          
    Countvowels c1 = new Countvowels();
      k= c1.count(s1);
     System.out.println("Number of vowels in given string is:"+""+k);
    }
 }
