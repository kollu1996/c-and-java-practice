#include<stdio.h>

int fib(int n)
{
  
  int f[n+1];
  int i,p,s=1;
 
  
  f[0] = 2;
  f[1] = 3;
 
  for (i = 2; i <= n; i++)
  {
   s=s*f[i-2];
  }
  f[n]=s+1;
 
  return f[n];
}
 
int main ()
{
  int n=4;
  printf("%d\t", fib(n));
  getchar();
  return 0;
}
