#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,j,k,l[100],a[100],s=0,min,h,p=0;
 scanf("%d",&i);
 scanf("%d",&k);
 for(j=0;j<i;j++)
{
  scanf("%d",&a[j]);
}


int fun(int a[],int h)
{
 int j,i,p=0,l[100],min,t;
for(j=0;j<i;j++)
{
  h=a[j]-k;
  if(h>=0)
{
  l[j]=h;
   p++;
}
}
if(l[0]<l[1])
{
min=l[0];
}
else
{
 min=l[1];
}

for(j=2;j<i;j++)
{
  if(l[j]<min)
  {
   min=l[j];
  }
}
t=min+k;
return t;
}
  
  

  
