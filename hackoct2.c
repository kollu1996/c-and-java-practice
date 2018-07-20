#include<stdio.h>
int main()
{
  int i,j,k,flag=0,a[100];
  scanf("%d",&i);
  for(j=0;j<i+1;j++)
   {
    scanf("%d",&a[j]);
   }
  if(i==0)
  {
   if(a[0]>0)
   {
     printf("%d ",1);
   }
  else if(a[0]<0)
   {
     printf("%d ",-1);
   }
 else 
   {
     printf("%d ",0);
   }
  }

  if(i>=1)
  {
   for(j=i;j>=0;j--)
   {
     if(a[j]!=0)
      {
        break;
      }
   }
    if(a[j]>0)
    {
     printf("%d ",1);
     printf("%d ",-1);
    }
    if(a[j]<0)
    {
     printf("%d ",-1);
     printf("%d ",1);
    }
   }
  for(j=i;j>=0;j--)
  {
     if(a[j]!=0)
     {
      flag=1;
     }
  }
  if(flag==0)
  {
    printf("%d ",0);
     printf("%d ",0);
  }
}
   
