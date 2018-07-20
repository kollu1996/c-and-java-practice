#include<stdio.h>
#include<stdlib.h>
 int fun(int s);
int main()
{
  int a[1500],i,k,p=0,z=1;
  for(i=1;i<1001;i++)
  {
  a[i]=fun(i);
  }
 scanf("%d",&k);
 while(p!=k)
 {
  if(a[z]==1)
  {
    p++;
  }
   z++;
  }
 printf("%d\n",z-1);
}
  int fun(int s)
 {
  int a[100],k,p=0,z=0,h;
  if(s==1||s==0)
  {
   return 1;
  }
  while(1)
 {
  k=s%2;
  a[p]=k;
  p++;
  s=s/2;
  z++;
  if(s==1||s==0)
 {
  a[p]=s;
  break;
 }
 }
 for(h=z;h>=0;h--)
{
  if(a[h]==1&&a[h-1]==1)
  {
   return 0;
   }
}
 return 1;
}
  
