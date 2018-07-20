#include <stdio.h>
#include<stdlib.h>
long long decimaltobinary(int num);
int main ( int argc, char *argv[] )
{
    int x,x1,x2;
    long long k;
    if ( argc != 2 ) 
    {
        printf("Invalid number of arguments\n");
        exit(0);
    }
     x= atoi(argv[1]); /*Binary read from command line */
     k=decimaltobinary(x);
     printf("%lld\n",k);
}

long long decimaltobinary(int num)
{
   int   remainder, base = 1;
   long long binary = 0;
    while (num > 0)
    {
        remainder = num % 2;
        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }
  return binary;
}
