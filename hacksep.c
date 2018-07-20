
 
#include<stdio.h>
long int fun(long int i);
int main()
{
  long int i,j,k=0,a[100],l,m,j1,j2;
  scanf("%ld",&j1);
 for(j2=0;j2<j1;j2++)
 {
  scanf("%ld",&j);
  for(l=0;l<j;l++)
 {
  scanf("%ld",&a[l]);
   k=k+fun(a[l]);
 }
   if(k%2==0)
 {
   printf("Alan\n");
 }
 else
 {
  printf("Charlie\n");
 }
 k=0;
}
}

  long int fun(long int i)
 {
  long int count=0;
   while(i%2==0)
  {
    i=i/2;
    count++;
  }
   return count;
 }
