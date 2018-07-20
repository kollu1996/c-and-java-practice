#include <stdio.h>
char *fun1();
char *fun2();
int main()
{
int i,k;
scanf("%d",&k);
for(i=0;i<k-1;i++)
{
 printf("%s",fun1());
}
printf("%s",fun2());
for(i=0;i<k-1;i++)
{
 printf(")");
}
}

char *fun1()
{
 char *x="min(int, ";
 return x;
}

char *fun2()
{
 char *x="int";
 return x;
}


