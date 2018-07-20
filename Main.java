
 class Base
  {
   int i=10;
  }
 class Derived extends Base
  {
   int i=20;
  }
 
 class Main 
 {
   public static void main(String args[])
    {
      Base ob = new Derived();
      System.out.println(ob.i);
     }
}
