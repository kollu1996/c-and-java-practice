#include<stdio.h>
void merge(int a1[],int a2[],int len1,int len2);
int *mergesort(int a[],int);
int main()
{
 int a[100],i,j,k,p=0,q=0;
 scanf("%d",&k);
 for(i=0;i<k;i++)
 {
   scanf("%d",&a[i]);
 }
 mergesort(a,k);
}


 int *mergesort(int a[],int k)
 {
   int a1[100],a2[100],a3[100],*p,*q,r=0,s=0,i;
  if(k==1)
 {
   return a;
 }
  for(i=0;i<(k/2);i++)
    {
       a1[i]=a[i];
       r++;
     }
     for(i=(k/2);i<k;i++)
    {
       a2[i]=a[i];
       s++;
     }
   
  p=mergesort(a1,r);
   q=mergesort(a2,s);
   merge(p,q,r,s);
}

void merge(int a1[],int a2[],int length1,int length2)
{
 int i=0,j=0,k=0,a3[100];
  while(i<length1&&j<length2)
   {
       if(a1[i]<=a2[j])
      {
       a3[k]=a1[i];
       k++;
       i++;
       }
    else if(a2[j]<=a1[i])
      {
       a3[k]=a2[j];
       k++;
       j++;
      }
    }
  while(i<length1)
   {
      a3[k]=a1[i];
      i=i+1;
      k=k+1;
    }
  while(j<length2)
    {
       a3[k]=a2[j];
        j++;
         k=k+1;
     }
 }
  




       

