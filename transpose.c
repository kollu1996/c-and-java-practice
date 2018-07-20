#include<stdio.h>
void swap(int *a,int *b);
int main()
{
 int i,j,k,a[100][100],temp;
 scanf("%d",&i);
 for(j=0;j<i;j++)
 {
  for(k=0;k<i;k++)
  {
   scanf("%d",&a[j][k]);
  }
 }

 for(j=0;j<i;j++)
   {
    for(k=0;k<i;k++)
    {
      if(j!=k)
       {
          swap(&a[j][k],&a[k][j]);
       }
    }
 }
 printf("Transpose of matrix is:\n");

 for(j=0;j<i;j++)
 {
  for(k=0;k<i;k++)
  {
   printf("%d\n",a[j][k]);
  }
 }
}

void swap(int *p,int *q)
{
  int temp;
  temp=*p;
   *p=*q;
   *q=temp;
 }


 


