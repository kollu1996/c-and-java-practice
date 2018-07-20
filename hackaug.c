#include<stdio.h>
int main()
{
 int i,j,k,k1,count1,count2,k2;
 char a[100],b[100];
  scanf("%d",&k);
  scanf("%d",&k1);
 
    scanf("%s",a);
   scanf("%s",b);
 


   for(k2=0;k2<k;k2++)
   {
    if(b[0]==a[k2]&&a[k2+1]!=b[0])
     {
       count1=k2;
        break;
      }
     }
  
  for(k2=0;k2<k;k2++)
  {
    if(b[k1-1]==a[k2])   
     {
        count2=k2;
          break;
      }
   }

 printf("%d%d\n",count1,count2);
 }
