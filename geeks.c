#include<stdio.h>
int main()
{
  int a[100],i,j,k,b[100];
  scanf("%d",&j);
  scanf("%d",&k);
  for(i=0;i<10;i++)
 {
   b[i]=0;
 }
  for(i=0;i<j;i++)
 {
  scanf("%d",&a[i]); 
 }

 for(i=0;i<j;i++)
 {
   b[a[i]]++;
 }

 for(i=0;i<10;i++)
 {
  if(b[i]==k)
  {
   printf("%d\n",i);
   break;
   }
 }
}

 

 

