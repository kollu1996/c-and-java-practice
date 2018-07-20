#include<stdio.h>
#include<malloc.h>
int main()
{
 int *p,n,i,sum=0,k;
 char a[100];
 printf("enter number of students\n");
 scanf("%d",&n);
 p=(int *)malloc(n*(sizeof(int)));
 for(i=0;i<n;i++)
{
  scanf("%d",(p+i));
}

for(i=0;i<n;i++)
{
  sum=sum+ *(p+i);
}

k=sum/i;

printf("%d\n",k);
}
