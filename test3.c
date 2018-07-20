#include<stdio.h>
int main()
{
  int a[100],i,j,k,l,d=0,s,r,m,h,q,r1;
  scanf("%d",&k);
 for(m=0;m<k;m++)
  {
  scanf("%d",&j);
  for(i=0;i<j;i++)
 {
  scanf("%d",&a[i]);
 }

int flag=0;
 s=0;
 for(r=0;r<(j%2==0)?j/2:(j+2)/2;r++)
{
  
if(s+1==a[r])
{
  s=a[r];
 if(a[r]!=a[j-r-1])
  {
   flag=1;
   printf("no\n");
   break;
  }
 }
 else if(a[r]==s)
{
  if(a[r]!=a[j-r-1])
  {
   printf("no\n");
   flag=1;
   break;
  }
}
else
{
  printf("no\n");flag=1;
  break;
}
if(s>=8)
{
  printf("no\n");flag=1;
  break;
}
 
}

if(j%2!=0&&!flag)
{
  if((a[j/2]==s||a[j/2]==s+1)&&a[j/2]==7)
 { 
  printf("yes\n");
}
}

else if(r==j/2&&!flag)
{
 printf("yes\n");
}


}
}
