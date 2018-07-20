#include <stdio.h>
#include<stdlib.h>
long long fun (long long i);
int main ( int argc, char *argv[] )
{
    long long x,k,x1,x2;
    if ( argc != 2 ) 
    {
        printf("Invalid number of arguments\n");
        exit(0);
    }
     x= atoi(argv[1]);                    /* taking the string given in command line and converting it into a number */
     k=fun(x);
     printf("%lld\n",k);   
}

long long fun(long long n)
{
  long long  a = 0, b = 1, c, i;
  if( n == 0)
    return a;
  for (i = 2; i <= n; i++)
  {
     c = a + b;
     a = b;
     b = c;
  }
  return b;
}
