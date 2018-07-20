#include<stdio.h>
void fun1();
void fun2();
int temp=10;
int main()
{
 fun1();
}

void fun1()
{
 int temp=30;
 fun2();
}

void fun2()
{
 printf("%d\n",temp);
}



