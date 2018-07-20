#include<stdio.h>
int factorial(int k);
int combination(int i,int j);
int main()
{
 int i,j,k;
 scanf("%d%d",&i,&j);
 k=combination(i,j);
 printf("combination of given number is %d\n",k);
}


