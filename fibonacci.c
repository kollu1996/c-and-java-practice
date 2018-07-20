#include<stdio.h>
int fibonacci(int n);
int main()
{
 int i,j;
 scanf("%d",&i);
 j=fibonacci(i);
 printf("%d\n",j);
}

 int fibonacci(int i)
{
  int k,j;
  if(i==1)
  {
    return 1;
  }
 else if(i==0)
  {
    return 0;
   }
 else 
  {
    return (fibonacci(i-1)+fibonacci(i-2));
  }
}
   
