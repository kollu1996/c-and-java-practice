
#include<stdio.h>
int *finddivisors(int k);
int main()
{
 int i,j,k=0,a[1000000],max,p[1000000],t;
 scanf("%d",&i);
 for(j=0;j<i;j++)
  {
    scanf("%d",&a[j]);
    k=k+a[j];
  }
 max=a[0];
  for(j=1;j<i;j++)
 {
  if(max<a[j])
  {
    max=a[j];
   }
}

 //printf("%d\n",k);
   

 for(j=max;j<=k;j++)
  {
    for(s=0;s<i;s++)
     {
       t=t+a[s];
      if(t>j)
       
      
 }
}
 
