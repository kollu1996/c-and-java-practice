#include<stdio.h>
#include<stdlib.h>
void main()
{
   int a[20], i, j, k, n,p=0;
   scanf("%d",&n);
   for(i = 0; i < n; i++) 
   {
      scanf("%d",&a[i]);
   }
   for(i=0; i < n; i++) 
   {
      for(j=i+1; j < n; )
      {
         if(a[j] == a[i])
         {
            for(k=j; k < n;k++) 
            {
               a[k] = a[k+1];
               p++;
            }
            n--;
         }
         else {
            j++;
         }
      }
   }
 printf("%d\n",p);
}


