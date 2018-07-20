#include<stdio.h>
#include<stdlib.h>
 long int fun( long int a[],long  int i,long int j);
int main()
{

  long int i,j,k,*a,k1,k2,k3;
 scanf("%ld",&i);
 a=(long int*)malloc(i*(sizeof(long int)));
 for(j=0;j<i;j++)
{
   scanf("%ld",&a[j]);
}
 scanf("%ld",&k2);
 for(k3=0;k3<k2;k3++)
{
 scanf("%ld",&k);
 k1=fun(a,k,i);
 printf("%ld\n",k1);
}
free(a);
}

 long int fun(long  int a[], long int i,long  int j)
{
  long int i1,count=0;
  for(i1=0;i1<j;i1++)
   {
     if(((a[i1])%i)==0)
      {
        count++;
      }
   }
 return count;
}

