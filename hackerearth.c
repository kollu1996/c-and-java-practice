#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,j,k,count,l,m,h,p,article=1,h1=0;
 scanf("%d",&i);
 p=i;
 count=i;
 scanf("%d",&j);
 scanf("%d",&k);
 scanf("%d",&l);
   if(p>l)
 {
  printf("%d\n",0);
  exit(0);
 }
 while((p-j)>k&&count+(p-j)<l)
{
  p=p-j;
  count=count+p;
  article++;
}
if(count+(p-j)<l)
{
h=l-count;
h1=h/k;
}
printf("%d\n",h1+article);
}


//100 19 1 180
