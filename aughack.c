#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#define ll  long long int
#define ull  unsigned long long int
ull  cmpfunc (const void * a, const void * b);
int main()
{
 ll a[100000],b[100000],i,j,k,l,m1,m2,m3,r1;
 ull c[100000],m;
 scanf("%lld",&i);
 scanf("%lld",&j);
 for(k=0;k<i;k++)
 {
  scanf("%lld",&a[k]);
 }
 for(k=0;k<i;k++)
 {
  scanf("%lld",&b[k]);
 }

 for(k=0;k<i;k++)
 {
  c[k]=(a[k]*a[k])+(b[k]*b[k]);
 }
 sort(c, c+i);
 

 m=c[j-1];

 m1=ceil(sqrt(m));
  printf("%lld\n",m1);
  
}



