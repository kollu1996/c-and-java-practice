#include<stdio.h>
void delete(int a[100], int k);
int main()
{
  int i,j,k,a[100],s;
  scanf("%d",&i);
  for(j=0;j<i;j++)
 {
   scanf("%d",&a[j]);
 }

 for(s=0;s<i;s++)
{
 k=a[s];
 printf("%d",k);
 delete(a,k);
 for(t=0;t<k;t++)
  {
    a[t];
  }
}
}

void delete(int a[100],int k)
{
  




 
   
   
