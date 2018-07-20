import java.util.*;
 public class Stac
{
   public static void main(String []args)
     {
          Stack <Character> p1 = new Stack <Character>();
           Scanner sc = new Scanner(System.in);
           String s3=sc.nextLine();
           StringBuffer sb = new StringBuffer (s3);
          for(int i=0;i<s3.length();i++)
           {
            char q=s3.charAt(i);
           if(q=='(')
          {
           p1.push(q);
          }
      else if(!p1.empty())
        {
           if((char) p1.peek() == '(' && q == ')')
          {
             p1.pop();
          }
       
        else
         {
           System.out.println("Not Balanced");
              System.exit(0);
         }
      }
       else
            {
           if(q==')')
             {
               System.out.println("Not Balanced");
                  System.exit(0);
             }
          }
        }
       if(p1.empty())
           {
               System.out.println("Balanced");
                System.exit(0);
            }
          else
             {
               System.out.println("Not Balanced");
                   System.exit(0);
           }
    }
 }
    
        

        
        
