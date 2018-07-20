#include<stdio.h>
#include<math.h>
int removeduplicate(int a[],int);
int function(int,int);
int div1=0,div2=0;
int a[100];
void fun(int n);
int fun3(int a[],int,int);
int main()
{
int c=0,i,j,k;
scanf("%d",&k);
for(i=1;i<=k;i++)
{
  for(j=i;j<=k;j++)
   {
c=c+function(i,j);
 }
}
printf("%d\n",c);
}

int function(int v,int b)
{
int i,l,q,h[100],c,d,m,z=0,t,f,g[100],e,x,n=0,y,w,j,r[100],s,s1=0,t1,u=0;
  fun(v);
  e=div1;
 
  for(i=0;i<e;i++)
 {
   h[i]=a[i];
 }
x= removeduplicate(h,e);
w=e-x;
  fun(b);
  f=div1;
 
  for(i=0;i<f;i++)
  {
    g[i]=a[i];
   }
 y=removeduplicate(g,f);
j=f-y;
if(w>j)
{
t=w;
t1=j;
}
else
{
t=j;
t1=w;
}


for(i=0;i<t;i++)
 {
   for(s=0;s<t1;s++)
   {
     if(t==w)
      {
          if(h[i]==g[s])
            {
              r[s1]=h[i];
                s1++;
             }
       }
    else if(t==j)
         {
              if(g[i]==h[s])
              {
                 r[s1]==g[i];
                   s1++;
                }
           }
   }
}


for(i=0;i<s1;i++)
{
  u=u+r[i];
}
return u;
}



void fun(int n)
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
                
                a[k]=i;
                k++;
                div1++;
             }
            else 
               {
               
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

 

int removeduplicate(int a[],int n)
{
  int i,j,k,p=0;
   for(i=0; i < n; i++) 
   {
      for(j=i+1; j < n; )
      {
         if(a[j] == a[i])
         {
            for(k=j; k < n;k++) 
            {
               a[k] = a[k+1];
               p++;
            }
            n--;
         }
         else {
            j++;
         }
      }
   }
return p;
}

int fun3(int a[],int p,int k)
{
  int count=0,i;
  for(i=0;i<k;i++)
  {
   if(a[i]==p)
    {
      count++;
     }
   }
 if(count==1)
{
 return 1;
}
else
{
 return 0;
}
}

          

