
#include<stdio.h>
int main()
{
 int a[10000],i,j,k,l=0,n=1,p,g,h,g1,h1,n1=1,b[100000],m,t,t1,t2=1,c[100000],s;
 scanf("%d",&i);
 for(j=0;j<i;j++)
{
  scanf("%d",&a[j]);
}
 for(j=0;j<i;j++)
{
  scanf("%d",&b[j]);
}

 for(j=0;j<i;j++)
  {
    for(k=0;k<i;k++)
     {
      if(j!=k)
       {
      c[l]=a[j]+b[k];
       l++;
       }
     }
 }
 m=c[0];
 for(s=1;s<l;s++)
  {
   if(c[s]<m)
   {
     m=c[s];
   }
  }
 printf("%d\n",m);
}
