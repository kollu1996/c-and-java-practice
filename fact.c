#include<stdio.h>
int fact(int k);
int main()
{
  int i,j,k;
   scanf("%d",&i);
   k=fact(i);
   printf("%d\n",k);
}

 int fact(int i)
  {
    if(i==1)
    {
     return 1;
    }
   else if(i==0)
    {
      return 1;
    }
   else
  {
    return i*fact(i-1);
  }
}
