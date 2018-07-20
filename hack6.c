#include<stdio.h>
int main()
{
  int a[10000],i,j,k;
  scanf("%d",&i);
  for(j=0;j<i;j++)
 {
   scanf("%d",&a[j]);
 }
for(k=0;k<i;k++)
 {
   if(a[k]>(i-k-1))
    {
      printf("%d\n",k+1);
      break;
    }
 }
}
