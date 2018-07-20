#include<stdio.h>
int search (int a[],int p,int l);
int fun(int a[],int p,int k,int z);
int main()
{
 int a[100],i,j,k,count=0,n,k1;

 scanf("%d",&n);
 scanf("%d",&k);
  
 for(j=0;j<n;j++)
{
  scanf("%d",&a[j]);
}

for(i=0;i<n;i++) 
 {
    count = count+ fun(a,a[i],k,n);
 }

 printf("%d\n",count);
}

int fun(int a[],int p,int k,int z)
{
 static int count=0,z1=0;
  int p1,p2,count1=0;
 
  if(k==0)
 {
   return count;
 }
 p1=search (a,k-p,z);
 
 
 if(p1==1)
 {
   count++;
 }
 
   z1++;
   fun(a,p,k-1,z);
}

int search (int a[],int p,int l)
{
 int f;
  for(f=0;f<l;f++)
  {
    if(a[f]==p)
     {
        return 1;
      }
   }
   return 0;
}
