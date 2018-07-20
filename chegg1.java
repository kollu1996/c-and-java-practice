import java.util.*
class Base
{
   static int x=100;
   static
   {
     x =  ++x + --x;
   }
}

class Derived extends Base
{
    static
        {
         x=x-- + --x;
        }
        {
         x=x++ - ++x;
        }
       }

 Derived b1 = new Derived();
  print b1.x;


