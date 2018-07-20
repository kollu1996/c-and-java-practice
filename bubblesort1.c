#include<stdio.h>
#include<stdlib.h>
 int comp(const void *a,const void *b);
int main()
{
int i,j,k,l,temp,b[100],m=0,*v,a[100];
scanf("%d",&j);
for(i=0;i<j;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<j-1;i++)
{
if(a[i]>a[i+1])
{
  k=a[i];
}
}
printf("%d\n",k);
}
