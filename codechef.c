#include<stdio.h>
#include<math.h>
int main()
{
  unsigned long long sh,cho,r1,r2;
  int k,a[100000],s,t;
  scanf("%d",&s);
  for(t=0;t<s;t++)
  {
  scanf("%llu",&sh);
  scanf("%llu",&cho);
 r1=ceil((-1+((sqrt(1+8*cho))/2)));
 if(r1<sh)
   printf("%llu\n",r1);
 else 
     printf("%d\n",-1);
 }
}
  
  

