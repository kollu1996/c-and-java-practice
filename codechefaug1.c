#include<stdio.h>
int main()
{
 int i,j,k,l,a[105],m,h,s,g;
 scanf("%d",&i);
 for(k=0;k<i;k++)
{
  scanf("%d",&j);
  for(l=0;l<j;l++)
  {
   scanf("%d",&a[l]);
  }

 for(l=0;l<j;l++)
{
  if(a[l]>7||a[l]<1)
{
  printf("no \n");
  break;
}
 if(a[l]==7)
{
  s=l;
}
}


  if(l==j)
{
  for(h=0;h<s;h++)
 {
  if(a[h]!=a[j-h-1])
  {
   printf("no\n");
   break;
  }
 }
}
 if(a[h]==7)
{
 printf("yes\n");
}
}
}
