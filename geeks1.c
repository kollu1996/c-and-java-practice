#include<stdio.h>
int main()
{
 int a[100][100],i,j,k,count=0,p=0,index,b[100],max;
 scanf("%d",&j);
 for(i=0;i<j;i++)
{
  for(k=0;k<j;k++)
   {
     scanf("%d",&a[i][k]);
   }
 }

 for(i=0;i<j;i++)
 {
  for(k=0;k<j;k++)
   {
     count=count+a[i][k];
   }
  b[p]=count;
  p++;
  count=0;
 }

 max=b[0];
 index=0;
 for(i=1;i<p;i++)
 {
  if(b[i]>max)
  {
    max=b[i];
    index=i;
  }
}
printf("Row number is %d and Count number is %d\n",index+1,max);
}
   


