#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void fun(int n,int a[]);
int main()
{
  int a[1000],i,j,k,l,m,n;
  scanf("%d",&i);
  for(j=0;j<1000;j++)
   {
      a[j]=0;
   }
 printf("%d\n",a[300]);

  /*for(j=0;j<i;j++)
  { 
     scanf("%d",&k);
     fun(k,a);
  }
 scanf("%d",&l);
 for(m=0;m<l;m++)
  {
      scanf("%d",&n);
   printf("%d\n",a[n]);
  }*/
}

 
  void fun(int n,int a[])
    {

       for (int i=1; i<=sqrt(n)+1; i++)
    {
        if (n%i==0)
        {
            
            if (n/i == i)
               {
                (a[i])++;
               }
 
            else 
               {
                 (a[i])++;
                 (a[n/i])++;
               }
        }    
    }
  }
 
      
 
      
