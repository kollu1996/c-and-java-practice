#include<stdio.h>
#include<stdlib.h>
void value(int *a,int k);
int main()
{
 int *a,i,j,k,l,*b;

scanf("%d",&k);
a=(int *)malloc(k*(sizeof(*b)));


 for(i=0;i<k;i++)
 {
  for(j=0;j<k;j++)
   {
   scanf("%d",&(a+i*k+j));
   }
  }
value((int*)a,k);
free(a);
 }

void value(int *a,int k)
{
 printf("the value of lenth is ::%d\n",k);
  int p,i,j;
  for(i=0;i<k;i++)
 {
   for(j=0;j<k;j++)
  {
   printf("%d",*a[i*k+j]);
 
  }
}
}







/*void func(int* array, int rows, int cols)
{
  int i, j;

  for (i=0; i<rows; i++)
  {
    for (j=0; j<cols; j++)
    {
      array[i*rows+j] = i*j;
    }
  }
}







int main()
{
  int rows, cols;
  int *x;


  x = malloc(rows * cols * sizeof *x);
  func(x, rows, cols);
  free(x);
}*/


