#include <stdio.h>
#include <math.h>
int convertBinaryToDecimal(int n);
int function(int num);
int main()
{
    int n,k,l,q,c,m,b,p;
    
    scanf("%d", &n);
    k=convertBinaryToDecimal(n);
    p=0^k;
    l=function(p);
    if((k%2)==0)
   {
   b= (k+1)^(k+(k+1));
   m=function(b);
   if(m>l)
   printf("%d",l);
   else
  {
    printf("%d",m);
  }
  }
 else if((k%2)!=0)
 {
   c= (k-1)^(k+(k-1));
   q=function(c);
   if(q>l)
   printf("%d",l);
   else
  {
    printf("%d",q);
  }
  }
  
 return 0;
}

int convertBinaryToDecimal(int n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return( decimalNumber);;
}


int function(int num)
{
    int  decimal_num, remainder, base = 1, binary = 0, no_of_1s = 0;
 
   
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
