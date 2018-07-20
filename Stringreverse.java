import java.util.*;
public class Stringreverse
  {
        public static void main(String []args)
            {
               Scanner sc = new Scanner(System.in);
                String s2 = sc.nextLine();
              StringBuffer sb = new StringBuffer(s2);
              sb.reverse();
              String s3 = s2.toString();
          System.out.println(s3);
         }

   }
