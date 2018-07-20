#include<stdio.h>
int main()

{
  int a,b,c; 
  printf("enter 2 numbers\n");
  scanf("%d%d",&a,&b);
  c=gcd(a,b);
  printf("%d\n",c);
 }

 int gcd(int a,int b)
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
