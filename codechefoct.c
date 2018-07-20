#include<stdio.h>
#include<math.h>
int main()
{
  long int a[1000],i,j,n,c1=0,c2=0,z,p,p2,k1,k2;
  scanf("%ld",&p);
  
  for(p2=0;p2<p;p2++)
 {
  scanf("%ld",&n);
  scanf("%ld",&z);
  k1=ceil(z/2);
  k2=z/10;
  for(i=0;i<n;i++)
  {
     scanf("%ld",&a[i]);
  }
  for(i=0;i<n;i++)
 {
  if(a[i]>=k1)
   {
       c1++;
    }
   if(a[i]<=k2)
   {
      c2++;
   }
 }
  if(c1==1&&c2==2)
 {
   printf("yes\n");
 }
 else
 {
   printf("no\n");
 }
c1=0;
c2=0;
}
}
   
