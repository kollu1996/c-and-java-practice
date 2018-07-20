#include<stdio.h>
int main()
{
 printf("%d",func(435));
}

int func(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num >>= 1;
    }
    return (count);
}

