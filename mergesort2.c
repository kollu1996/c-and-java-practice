#include<stdio.h>
void merge_sort(int a[100],int p,int q);
void merge(int a[100],int p,int r,int q);
int a[100];
int main()
{
 int i,j,k,l;
 printf("Enter number of elements in array\n");
 scanf("%d",&i);
 for(j=0;j<i;j++)
{
 scanf("%d",&a[j]);
}
merge_sort(a,0,i-1);
for(l=0;l<i;l++)
{
  printf("%d\n",a[l]);
}
}

void merge_sort(int a[100],int p,int q)
{

  int n,w,r,z;
 if(p<q)
{
 n=(p+q)/2;
 merge_sort(a,p,n);
 merge_sort(a,n+1,q);
merge(a,p,n,q);
}
}

void merge(int a[100],int p,int r,int q)
{
    int i, m, k, l, temp[50];
 
    l = p;
    i = p;
    m = r + 1;
    while ((l <= r) && (m <= q))
    {
        if (a[l] <= a[m])
        {
            temp[i] = a[l];
            l++;
        }
        else
        {
            temp[i] = a[m];
            m++;
        }
        i++;
    }
    if (l > r)
    {
        for (k = m; k <= q; k++)
        {
            temp[i] = a[k];
            i++;
        }
    }
    else
    {
        for (k = l; k <= r; k++)
        {
             temp[i] = a[k];
             i++;
        }
    }
 
    for (k = p; k <= q; k++)
    {
        a[k] = temp[k];
    }
}





