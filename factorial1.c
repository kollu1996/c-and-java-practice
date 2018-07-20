#include<stdio.h>
long factorial(long p);
int main()
{
 long i,j,k;
 printf("enter a number\n");
 scanf("%ld",&i);
k=factorial(i);
 printf("%ld\n",k);
}


 long factorial(long k)
{
  int d,g;
 d=k;
 if(d==1)
 {
  return 1;
 }
 else
 {
  g=d*factorial(d-1);
 }
return g;
} 
