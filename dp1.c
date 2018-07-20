#include<stdio.h>
int main()
{

 long long int a[100000],temp,i,n,k,x;
 scanf("%lld",&x);
 
 for(k=0;k<x;k++)
 {
 scanf("%lld",&n);
 a[1]=2;
 a[2]=3;
temp=a[1]*a[2];
 for(i=3;i<=n;i++)
{
  a[i]=((temp%1000000007)+1);
  temp=(temp%1000000007)*a[i];
}
for(k=1;k<=n;k++)
 {
  printf("%lld ",a[k]);
 }
 printf("\n");
}
}
