#include <stdio.h>
									 
									void main()
									{
									    int vectorx[10];
									    int i, n, pos, element, found = 0;
									 
									    printf("Enter how many elements\n");
									    scanf("%d", &n);
									    printf("Enter the elements\n");
									    for (i = 0; i < n; i++)
									    {
										scanf("%d", &vectorx[i]);
									    }
									    printf("Input array elements are\n");
									    for (i = 0; i < n; i++)
									    {
										printf("%d\n", vectorx[i]);
									    }
									    printf("Enter the element to be deleted


  void delete(int t,int arr[],int p)
{
    int i,pos,found;
								    
    for (i = 0; i < p; i++)
    {
        if (arr[i] == t)
        {
            found = 1;
            pos = i;
            break;
        }
    }
    if (found == 1)
    {
        for (i = pos; i <  p - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
}
