#include<stdio.h>
#include<stdlib.h>
int x=0;
void fun1(int);
void evoke_fun(int);
int fredo_game(int,int,int a[]);
int main()
{
int i,n,k,p,a[100000],h,q[100000],r[100000],t;
scanf("%d",&h);
for(t=0;t<h;t++)
{
scanf("%d",&i);
scanf("%d",&n);
for(k=0;k<n;k++)
{
scanf("%d",&a[k]);
}
q[t]=fredo_game(i,n,a);
if(q[t]==0)
{
  r[t]=x;
}
}

for(t=0;t<h;t++)
{
  if(q[t]>0)
  {
   printf("Yes %d\n",q[t]);
  }
 else if(q[t]==0)
 {
  printf("No %d\n",r[t]);
 }
}
}

int fredo_game(int i,int n,int a[])
{
 x=0;
 int k,p;
for(k=0;k<n;k++)
{
p=a[k];
if(p==0)
{
 i=i-1;
  x=x+1;
 if(i==0)
 {
   //printf("No %d\n",x);
  return i;
 exit(0);
 }
}
else if(p==1)
{
  i=i+2;
  x=x+1;
}
else
{
 printf("wrong input\n");
}
}
if(i>0)
{
 //printf("Yes %d\n",i);
 return i;
}
}
