import java.util.*;
import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class Commentremovexml
{
  public static void main(String []args)
   {
  Scanner sc = new Scanner(System.in);
  String s1 = sc.nextLine();
  String s2="<!--.*-->";
  Pattern p1 = Pattern.compile(s2);
  String [] s3 = p1.split(s1);
 for(String s4:s3)
  {
  System.out.print(s4);
  }
 }
}
 
