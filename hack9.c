#include<stdio.h>
float divide (int a , int b);
int main()
{
  int i,j,k,a[100],b[100],s=0,p=0,c[100],value=0,l=0,d=0,value1=0,q=0,l4,l5,l3;
  float l6;
  scanf("%d",&k);
  scanf("%d",&j);
 for(i=0;i<j;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<j;i++)
 {
  scanf("%d",&c[i]);
 }
 for(i=0;i<j-1;i++)
 {
  s=(a[i+1]-a[i]);
  b[p]=s;
  p++;
 }

 b[p]=a[j-1];


for(d=0;d<j;d++)
{
 value1=value1+(b[d]*c[d]);
 
if(value1<=k)
{
    value=value1;
    l=l+b[d];
}
  if(value1>k)
   {
      break;
   }
}
l3=value1-k;
l5=(b[d]*c[d]);
l4=(l3*b[d]);
l6=divide(l4,l5);
printf("%f\n",(l+l6));
}

float divide(int a ,int b)
{
  float k,l,m;
  k=a/b;
  l=a%b;  
  m=k+l;
  return m;
}
