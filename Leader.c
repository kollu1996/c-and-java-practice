#include<stdio.h>
int largest (int a[],int b,int c);
void fun(int a[],int n,int p);
int main()
{
  int a[100],i,j,k,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
  printf("%d\n",a[n-1]);
  fun(a,n-1,0);
}

void fun(int a[],int n,int p)
{
   if(n==p)

   {
     printf("%d\n",-1);
   }
   
  if(a[p]>largest(a,n,p+1))
    {
       printf("%d\n",a[p]);
    }
  else
  {
    fun(a,n,p+1);
  }
 }

int largest (int a[],int c,int b)
{
  int max=a[b];
  for(int i=b+1;i<=c;i++)
  {
    if(a[i]>max)
   {
    max=a[i];
   }
  }
 return max;
}
