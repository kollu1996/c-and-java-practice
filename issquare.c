#include<stdio.h>
#include<math.h>
int main()
{
  float p,q;
  scanf("%f",&p);
  printf("%f\n",sqrt(p));
  q=p/sqrt(p);
  if(sqrt(p)==q)
  {
   printf("yes it is square root\n");
  }
  else
  {
    printf("no\n");
   }
 }
