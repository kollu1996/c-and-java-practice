#include<stdio.h>
int main()
{
  int a[100],b[100],c[100],i=0,j=0,k=0,d[100],p=0,q=0,a3[100],m,s,h;
  scanf("%d",&h);
  for(s=0;s<h;s++)
 {
   scanf("%d",&c[s]);
 }

 for(s=0;s<(h/2);s++)
 {
   a[s]=c[s];
   p++;
 }

 for(s=(h/2);s<h;s++)
 {
   b[s]=c[s];
   q++;
 }

  while(i<p&&j<q)
   {
       if(a[i]<=b[j])
      {
       a3[k]=a[i];
       
       i++;
       }
    else 
      {
       a3[k]=b[j];
       
       j++;
      }
     k++;
    }
  while(i<p)
   {
      a3[k]=a[i];
      i=i+1;
      k=k+1;
    }
  while(j<q)
    {
       a3[k]=b[j];
        j=j+1;
         k=k+1;
     }
  for(m=0;m<3;m++)
  {
    printf("%d\n",a3[m]);
  }
 }
