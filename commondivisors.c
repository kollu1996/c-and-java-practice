#include<stdio.h>
#include<math.h>
int div1=0,div2=0;
int a[100];
int *fun(int n);
int fun1(int ,int);
int main()
{
  int i,j,k,l=0,d;
  scanf("%d",&k);
 for(i=1;i<=k;i++)
  {
    for(j=i;j<=k;j++)
     {
        /*printf("(%d,%d)\n",i,j);*/
       d=fun1(i,j);
       printf("%d\n",d);
      }
    }
 // printf("%d\n",l);
 }

int fun1(int v,int b)
{
  int i,*l,*q,h[100],c,d,m,z=0,t,f,g[100],e,x[100],n=0;
  fun(v);
  e=div1;
  for(i=0;i<div1;i++)
 {
   h[i]=a[i];
 }
  fun(b);
  f=div1;
  for(i=0;i<div1;i++)
  {
    g[i]=a[i];
   }

 if(e>f)
 t=e;
 else
 t=f;
 for(i=0;i<t;i++)
 {
  if(h[i]==g[i])
   {
      x[i]=h[i];
      z++;
   }
 }
for(i=0;i<z;i++)
 {
  n=n+x[i];
 }
return n;
}



int *fun(int n)
   {
   int i;
   int k=0;
   div1=0;
    for (int i=1; i<=sqrt(n)+1; i++)
    {
        if (n%i==0)
        {
            if (n/i == i)
              {
                //printf("%d ", i);
                a[k]=i;
                k++;
                div1++;
             }
            else 
               {
                //printf("%d %d ", i, n/i);
                 a[k]=i;
                 k++;
                 div1++;
                 a[k]=n/i;
                 k++;
                 div1++;
               }
        }
    }
}

