#include<stdio.h>
int main()
{
 int i,k,j,a[100],l;
 scanf("%d",&i);
 for(j=0;j<i;j++)
 {
   scanf("%d",&a[j]);
 }
 scanf("%d",&k);

 for(j=0;j<i;j++)
 {
   l=search(k+a[j],a)
   
