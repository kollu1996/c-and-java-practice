#include<stdio.h>
#include<math.h>
void printDivisors(int n);
int main()
{
    printf("The divisors  are: \n");
    printDivisors(100);
    return 0;
}
void printDivisors(int n)
{
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n)+1; i++)
    {
        if (n%i==0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                printf("%d ", i);
 
            else // Otherwise print both
                printf(" %d %d ", i, n/i);
        }
    }
}
