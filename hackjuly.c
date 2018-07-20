#include<stdio.h>
#include<math.h>
int isprime(int p);
int main()
{
 int a[100][100],i,j,k,n,count=0,l;
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
     {
        scanf("%d",&a[i][j]);
     }
  }

 for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     {
      
     if(i==0&&j==0)
      {
        k=a[i+1][j]+a[i][j+1];
          l=isprime(k);
         if(l==1)
       {
         count++;
       }
     }
  else if(i==0&&j==n-1)
   {
       k=a[i+1][j]+a[i][j-1];
        l=isprime(k);
      if(l==1)
       {
         count++;
       }
   }
  else if(i==n-1&&j==0)
   {
      k=a[i-1][j]+a[i][j+1];
     l=isprime(k);
      if(l==1)
       {
         count++;
       }
   }
 else if(i==n&&j==n)
  {
    k=a[i-1][j]+a[i][j-1];
   l=isprime(k);
      if(l==1)
       {
         count++;
       }
   }
  else if(i==0)
  {
     k=a[i+1][j]+a[i][j+1]+a[i][j-1];
     l=isprime(k);
      if(l==1)
       {
         count++;
       }
   }
  else if(i==n)
  {
    k=a[i-1][j]+a[i][j-1]+a[i][j+1];
    l=isprime(k);
      if(l==1)
       {
         count++;
       }
   }
  else if(j==0)
   {
    k=a[i+1][j]+a[i-1][j]+a[i][j+1];
     l=isprime(k);
      if(l==1)
       {
         count++;
       }
    }
  else if(j==n)
   {
    k=a[i+1][j]+a[i][j-1]+a[i-1][j];
   l=isprime(k);
      if(l==1)
       {
         count++;
       }
   }
 else
  {
     k=a[i+1][j]+a[i][j+1]+a[i-1][j]+a[i][j-1];
    l=isprime(k);
      if(l==1)
       {
         count++;
       }
   }
 }
}
printf("%d\n",count);
}

int isprime(int p)
 {
  int i,j,k;
  float s;
  s=sqrt(p);
  i=(int)s;
  for(j=2;j<=i;j++)
    {
     if(p%j==0)
      {
         return 0;
       }
     }
 if(j==i+1)
 {
    return 1;
  }
 }

