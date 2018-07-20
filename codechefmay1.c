#include<stdio.h>
#include<stdlib.h>
int fun(char a[],int);
int main()
{
 int m,i=0,j[100000],k,h;
 char a[100000],b,d;
 scanf("%d ",&m);

 for(h=0;h<m;h++)
{
 i=0;
   while(1)
{
 scanf("%c",&a[i]);
 if(a[i]=='\n')
  {
    break;
  }
 i++;
}
j[h]=fun(a,i);
}
for(k=0;k<m;k++)
{
  if(j[k]==1)
   {
     printf("yes\n");
   }
  else if(j[k]==0)
  {
    printf("no\n");
  }
}
}

int fun(char a[],int i)
{
int k,l;

if(a[0]=='E')
{
 return 0;
}
l=i;
for(k=0;k<l;k++)
{
  if(a[k]=='S'&& k!=(l-1))
  {
    if(a[k+1]=='S')
    {
       return 1;
     }
    else
   {
    return 0;
   }
   }
 }
return 1;
}
