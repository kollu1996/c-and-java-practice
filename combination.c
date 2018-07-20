#include<stdio.h>
int binomialCoeff(int n, int k);
int main()
{
  int i,j,k;
  scanf("%d%d",&i,&j);
 k= binomialCoeff(i,j);
 printf("%d\n",k);
}
int binomialCoeff(int n, int k)
{
    int res = 1;
    if (k > n - k)
       k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

