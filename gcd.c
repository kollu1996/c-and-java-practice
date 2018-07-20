#include<stdio.h>
#include<math.h>
long gcd(long a,long b);
int main()

{
  long a,b,c,result=0,t,i,r; 
 
  c=gcd(568,279);
  if(c==1)
 {
   result++;
 }
  printf("%ld\n",result);
}

 long gcd(long a,long b)
{
   if(a==0)
  {
    return b;
  }
  else if(b==0)
  {
     return a;
  }
  else if(a>b)
  {
    gcd(a-b,b);
  }
  else if(b>a)
  {
    gcd(a,b-a);
  }
}
