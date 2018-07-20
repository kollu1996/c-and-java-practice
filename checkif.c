#include<stdio.h>
#include<stdlib.h>
//void printRepeating(int arr[], int size);
int main()
{
  int a[100],i,k,count=0,p;
  scanf("%d\n",&k);
  for(i=0;i<k;i++)
 {
  scanf("%d",&a[i]);
 }
  scanf("%d",&p);
int fun3(int a[],int p/*numbet to be searched*/,int k/*length*/)
{
  int count=0,i;
  for(i=0;i<k;i++)
  {
   if(a[i]==p)
    {
      count++;
     }
   }
 if(count==1)
{
 return 1;
}
else
{
 return 0;
}
}
