#include <stdio.h>
#include<stdlib.h>
long long decimaltobinary(long long num);
int main ( int argc, char *argv[] )
{
    long long x,x1,x2;
    long long k;
    if ( argc != 2 ) 
    {
        printf("Invalid number of arguments\n");
        exit(0);
    }
     x= atoi(argv[1]); /* decimal read from command line */
     k=decimaltobinary(x);
     printf("%lld\n",k);
}

long long decimaltobinary(long long num)
{
   long long  decimal_val = 0, base = 1, rem;                 
    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }

  return decimal_val;
}
