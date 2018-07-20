 #include<stdio.h>
#include<stdlib.h>
int  *delete(int a[],int b);
int  min(int b[]);
int main()
{
 int i,l,a[100],z,s,t;
 i=1;
 l=min(a);
 z=l;
 while(i<=3)
{
 s=min(delete(z,a));
 t=s-l;
 if((t)==i)
 {
   z=s;
   i=i+1;
 }
 else
 {
   printf("%d\n",s);
 }
}
}

int *delete (int a[],int b,int e)
{
  *a=malloc(sizeof(int) * 100);
   while(k<(e-1))
 {
  if(b==a[k])
 {
   a[k]=a[k+1];
   break;
 }
}
   
  
   
