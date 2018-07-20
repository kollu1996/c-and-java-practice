#include <stdio.h>
 int function(long num);
int main()
{
 int k;
 long num;
 printf("enter a number\n");
 scanf("%ld",&num);
 k=function(num);
 printf("%d",k);
}
int function(long num)
{
    long  decimal_num, remainder, base = 1, binary = 0, no_of_1s = 0;
 
   
    decimal_num = num;
    while (num > 0)
    {
        remainder = num % 2;
        /*  To count no.of 1s */
        if (remainder == 1)
        {
            no_of_1s++;
        }
        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }
    return( no_of_1s);
}
