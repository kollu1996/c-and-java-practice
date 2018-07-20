#include<stdio.h>
int fun (int i);
int main()
{
  int i,j,k,l;
  scanf("%d",&i);
  k=fun(i);
  printf("%d\n",k);
}

int fun (int i)
 {
   if(i<=1)
   {
    return i;
   }
 else
  {
    return (fun(i-1)+fun(i-2));
   }
}
