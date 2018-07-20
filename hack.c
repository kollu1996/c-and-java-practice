#include<stdio.h>
void function(int a[100],int b[100],int *p,int *q);
int partition(int a[100],int c);
void quicksort(int a[100],int low,int high);
void swap(int *a,int *b);
int j,m;
int main()
{
 int a[100],b[100],i,k,l,g,h;
 printf("give size of array 1\n");
 scanf("%d",&j);
 for(i=0;i<j;i++)
{
  scanf("%d",&a[i]);
}

printf("give size of array 2\n");
scanf("%d",&m);

for(k=0;k<m;k++)
{
  scanf("%d",&b[k]);
}
function(a,b,&g,&h);
printf("smallest of 2 arrays is %d %d\n",g,h);
}

void function(int a[100],int b[100],int *p,int *q)
{
 int i,k,l,index1=0,index2=0,s;
 /*printf(" lengths of arays is :%d%d\n",j,m);
 l=a[0];
 k=b[0];
 for(i=1;i<j;i++)
 {
    if(a[i]<l)
     {
         l=a[i];
         index1++;
      } 
 }

 for(i=1;i<m;i++)
 {
    if(b[i]<k)
     {
         k=b[i];
          index2++;
      } 
 }
 if(index1!=index2)
{
   s=l+k;
   printf("%d\n",s);
}
 else 
{
  function(delete(a,b,a[index1],b[index2]));
}
 *p=l;
 *q=k;*/
}

